---
title: "Operatore di conversione esplicita di tipi: () | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "conversioni [C++], esplicita"
  - "conversione di tipi di dati [C++], esplicita"
  - "operatore di conversione esplicita di tipi di dati"
  - "operatori [C++], conversione esplicita di tipi"
  - "conversione di tipi [C++], conversioni esplicite"
ms.assetid: 54272006-5ffb-45ed-8283-27152ab97529
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Operatore di conversione esplicita di tipi: ()
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Il linguaggio C\+\+ consente la conversione esplicita del tipo mediante una sintassi simile a quella della chiamata di funzione.  
  
## Sintassi  
  
```  
  
simple-type-name ( expression-list )  
```  
  
## Note  
 Un elemento *simple\-type\-name* seguito da *expression\-list* racchiuso tra parentesi, consente di generare un oggetto del tipo specificato utilizzando le espressioni specificate.  Nell'esempio seguente viene illustrata una conversione di tipo esplicita per il tipo int:  
  
```  
int i = int( d );  
```  
  
 Nell'esempio seguente viene utilizzata una versione modificata della classe `Point` definita in [Risultati delle chiamate di funzione](../misc/function-call-results.md).  
  
## Esempio  
  
```  
// expre_Explicit_Type_Conversion_Operator.cpp  
// compile with: /EHsc  
#include <iostream>  
  
using namespace std;  
class Point  
{  
public:  
    // Define default constructor.  
    Point() { _x = _y = 0; }  
    // Define another constructor.  
    Point( int X, int Y ) { _x = X; _y = Y; }  
  
    // Define "accessor" functions as  
    // reference types.  
    unsigned& x() { return _x; }  
    unsigned& y() { return _y; }  
    void Show()   { cout << "x = " << _x << ", "  
                         << "y = " << _y << "\n"; }  
private:  
    unsigned _x;  
    unsigned _y;  
};  
  
int main()  
{  
    Point Point1, Point2;  
  
    // Assign Point1 the explicit conversion  
    //  of ( 10, 10 ).  
    Point1 = Point( 10, 10 );  
  
    // Use x() as an l-value by assigning an explicit  
    //  conversion of 20 to type unsigned.  
    Point1.x() = unsigned( 20 );  
    Point1.Show();  
  
    // Assign Point2 the default Point object.  
    Point2 = Point();  
    Point2.Show();  
}  
```  
  
## Output  
  
```  
x = 20, y = 10  
x = 0, y = 0  
```  
  
 Sebbene l'esempio precedente dimostri la conversione del tipo esplicita mediante le costanti, la stessa tecnica può essere utilizzata per eseguire queste conversioni di oggetti.  Nel frammento di codice che segue viene illustrata questa alternativa:  
  
```  
int i = 7;  
float d;  
  
d = float( i );  
```  
  
 Le conversioni esplicite dei tipi possono essere specificate utilizzando la sintassi di "cast".  L'esempio precedente, riscritto utilizzando la sintassi di cast, è:  
  
```  
d = (float)i;  
```  
  
 Sia le conversioni eseguite con il cast che con la funzione danno gli stessi risultati quando si esegue la conversione di valori singoli.  Tuttavia, nella sintassi stile\-funzione è possibile specificare più argomenti per la conversione.  Questa differenza è importante per i tipi definiti dall'utente.  Si consideri una classe `Point` e le relative conversioni:  
  
```  
struct Point  
{  
    Point( short x, short y ) { _x = x; _y = y; }  
    ...  
    short _x, _y;  
};  
...  
Point pt = Point( 3, 10 );  
```  
  
 Nell'esempio precedente, che utilizza la conversione stile\-funzione, viene illustrato come convertire due valori \(uno per *x* e uno per *y\)*nel tipo definito da `Point`.  
  
> [!CAUTION]
>  Si consiglia di utilizzare con cautela le conversioni esplicite del tipo, poiché queste eseguono l'override del controllo del tipo incorporato del compilatore C\+\+.  
  
 La notazione [cast](../cpp/cast-operator-parens.md) deve essere utilizzata per le conversioni dei tipi che non dispongono di *simple\-type\-name* \(puntatore o tipi di riferimento, ad esempio\).  La conversione verso tipi che possono essere espressi con *simple\-type\-name* può essere scritta in qualsiasi formato.  Vedere [Identificatori di tipo](http://msdn.microsoft.com/it-it/34b6c737-0ef1-4470-9b77-b26e46c0bbd4) per ulteriori informazioni su cosa costituisce un *simple\-type\-name*.  
  
 La definizione del tipo all'interno dei cast non è consentita.  
  
## Vedere anche  
 [Espressioni in forma suffissa](../cpp/postfix-expressions.md)   
 [Operatori C\+\+](../misc/cpp-operators.md)   
 [Operatori C\+\+, precedenza e associazione](../cpp/cpp-built-in-operators-precedence-and-associativity.md)