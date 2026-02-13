# 🔍 Author Identification System (The Nifty Project)

This program identifies the author of an anonymous "mystery" text by extracting linguistic "fingerprints" and comparing them against a database of known author signatures using statistical analysis.

## 🚀 Overview
The system analyzes writing styles based on five specific linguistic features. By calculating a **Weighted Absolute Difference**, the program determines which known author most closely matches the mystery text.



## 📊 Linguistic Features
The program calculates the following metrics to build an "Author Signature":

| Feature | Description |
| :--- | :--- |
| **Avg Word Length** | Average characters per word (punctuation stripped). |
| **Type-Token Ratio** | Vocabulary diversity (Unique Words / Total Words). |
| **Hapax Legomana** | Frequency of rare words (Words occurring once / Total Words). |
| **Avg Sentence Length** | Average number of words per sentence. |
| **Sentence Complexity** | Average number of phrases (separated by `,` `:` `;`) per sentence. |

## ⚖️ The Similarity Formula
To compare the mystery text ($M$) against an author ($A$), the program calculates a score ($S$) using assigned weights ($w$):

$$S = \sum_{i=1}^{5} |f_{i,M} - f_{i,A}| \times w_i$$

*A lower score indicates a higher similarity.*

---

## 🛠️ How to Run
1. **Compile the code:**
   ```bash
   g++ find_author.cpp -o find_author
