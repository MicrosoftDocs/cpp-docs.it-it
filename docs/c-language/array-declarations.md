---
title: "Dichiarazioni di matrice | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "matrici [C++], dichiarazione"
  - "dichiarazione di matrici"
  - "multidimensionali (matrici)"
ms.assetid: 5f958b97-cef0-4058-bbc6-37c460aaed9b
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 10
---
# Dichiarazioni di matrice
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Una "dichiarazione di matrice" denomina la matrice e specifica il tipo dei relativi elementi.  Può inoltre definire il numero di elementi presenti nella matrice.  Una variabile con tipo matrice è considerata un puntatore al tipo di elementi della matrice.  
  
## Sintassi  
 `declaration`:  
 *declaration\-specifiers init\-declarator\-list*  opt               **;**  
  
 *init\-declarator\-list*:  
 *init\-declarator*  
  
 *init\-declarator\-list* **,**  *init\-declarator*  
  
 *init\-declarator*:  
 *declarator*  
  
 *declarator*  **\=**  *initializer*  
  
 `declarator`:  
 *pointer*  opt *direct\-declarator*  
  
 *direct\-declarator*:  
 *direct\-declarator*  **\[**  *constant\-expression*  opt **\]**  
  
 Poiché *constant\-expression* è un elemento facoltativo, la sintassi presenta due formati:  
  
-   Il primo formato definisce una variabile di matrice.  L'argomento *constant\-expression* all'interno delle parentesi specifica il numero di elementi presenti nella matrice.  *constant\-expression*, se presente, deve avere il tipo integrale e un valore superiore a zero.  Ogni elemento include il tipo specificato da *type\-specifier*, che può essere di qualsiasi tipo tranne `void`.  Un elemento di matrice non può essere un tipo di funzione.  
  
-   Il secondo formato dichiara una variabile definita altrove.  Omette l'argomento *constant\-expression* tra parentesi quadre, ma non le parentesi.  È possibile utilizzare questo formato solo se in precedenza la matrice è stata inizializzata, quindi è stata dichiarata come parametro o come riferimento a una matrice definita in modo esplicito in altre parti del programma.  
  
 In entrambi i formati, *direct\-declarator* denomina la variabile e può modificare il tipo di variabile.  Le parentesi quadre \(**\[ \]**\) che seguono *direct\-declarator* modificano il dichiaratore in un tipo di matrice.  
  
 I qualificatori di tipo possono essere visualizzati nella dichiarazione di un oggetto di tipo matrice, ma i qualificatori vengono applicati agli elementi anziché alla matrice stessa.  
  
 È possibile dichiarare una matrice di matrici \(una matrice "multidimensionale"\) facendo seguire al dichiaratore della matrice un elenco di espressioni costanti tra parentesi nel seguente formato:  
  
```  
  
type-specifier declarator [constant-expression] [constant-expression] ...  
```  
  
 Ogni *constant\-expression* tra parentesi quadre definisce il numero di elementi di una data dimensione: le matrici bidimensionali dispongono di due espressioni tra parentesi quadre, le matrici tridimensionali ne hanno tre e così via.  È possibile omettere la prima espressione costante se in precedenza la matrice è stata inizializzata, quindi è stata dichiarata come parametro o come riferimento a una matrice definita in modo esplicito in altre parti del programma.  
  
 È possibile definire le matrici di puntatori in diversi tipi di oggetti utilizzando dichiaratori complessi, come descritto in [Interpretazione dei dichiaratori più complessi](../c-language/interpreting-more-complex-declarators.md).  
  
 Le matrici vengono archiviate in base alla riga.  Ad esempio, la seguente matrice è composta da due righe con tre colonne ciascuna:  
  
```  
char A[2][3];  
```  
  
 Le tre colonne della prima riga vengono archiviate per prime, seguite dalle tre colonne della seconda riga.  Ciò significa che l'ultimo indice varia più rapidamente.  
  
 Per fare riferimento a un singolo elemento di matrice, utilizzare un'espressione di indice, come descritto nell'argomento [Operatori di suffisso](../c-language/postfix-operators.md).  
  
## Esempi  
 In questi esempi sono illustrate le dichiarazioni di matrici:  
  
```  
float matrix[10][15];  
```  
  
 La matrice bidimensionale denominata `matrix` dispone di 150 elementi, ognuno dei quali include un tipo **float**.  
  
```  
struct {  
    float x, y;  
} complex[100];  
```  
  
 Si tratta di una dichiarazione di una matrice di strutture.  Questa matrice contiene 100 elementi; ogni elemento è una struttura contenente due membri.  
  
```  
extern char *name[];  
```  
  
 Questa istruzione dichiara il tipo e il nome di una matrice di puntatori a `char`.  L'effettiva definizione di `name` viene eseguita altrove.  
  
 **Sezione specifica Microsoft**  
  
 Il tipo di intero richiesto per contenere la dimensione massima di una matrice è la dimensione **size\_t**.  Definito nel file di intestazione STDDEF.H, **size\_t** è `unsigned int` con l'intervallo da 0x00000000 a 0x7CFFFFFF.  
  
 **Fine sezione specifica Microsoft**  
  
## Vedere anche  
 [Dichiaratori e dichiarazioni di variabili](../c-language/declarators-and-variable-declarations.md)