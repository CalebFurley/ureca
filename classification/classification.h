//cf Definitions for Classification Models.

#ifndef CLASSIFICATION_H
#define CLASSIFICATION_H

#include <eigen/Dense>

class LogisticRegression
{
private:
	Eigen::VectorXd m_weights;
	double m_bias;
public:
	LogisticRegression();
	~LogisticRegression();
	void train(const Eigen::MatrixXd& data_X, const Eigen::MatrixXd& data_Y, float alpha, int epochs);
	Eigen::MatrixXd predict(const Eigen::MatrixXd& data_X);
	double score(const Eigen::MatrixXd& data_X, const Eigen::MatrixXd& data_Y);
};

class KNearestNeighbors
{
private:
	Eigen::MatrixXd m_data_X;
	Eigen::VectorXd m_data_Y;
	int m_k = 0; //cf number of neighbors.
	int m_number_of_classes = 0;
	double euclidean_distance(const Eigen::VectorXd& x1, const Eigen::VectorXd& x2);
public:
	KNearestNeighbors(int k, int number_of_classes) : m_k(k), m_number_of_classes(number_of_classes);
	~KNearestNeighbors();
	void train(const Eigen::MatrixXd& data_X, const Eigen::MatrixXd& data_Y);
	Eigen::MatrixXd predict(const Eigen::MatrixXd& data_X);
	double score(const Eigen::MatrixXd& data_X, const Eigen::MatrixXd& data_Y);
};

class DecisionTree
{
private:
	// members go here.
public:
	DecisionTree();
	~DecisionTree();
	void train();
	void predict();
	double score();
};

class RandomForest
{
private:
	// members go here.
public:
	RandomForest();
	~RandomForest();
	void train();
	void predict();
	double score();
};

class NaiveBayes
{
private:
	// members go here.
public:
	NaiveBayes();
	~NaiveBayes();
	void train();
	void predict();
	double score();
};

//cf Helper Class for DecTree and RandFor.
class TreeNode
{
private:
	// members go here.
public:
	TreeNode();
	~TreeNode();
};

#endif