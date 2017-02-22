---
title: "Utilizzo di extern per specificare un collegamento | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "extern"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "dichiarazioni, esterno"
  - "extern (parola chiave) [C++], collegamento a funzioni non C++"
  - "collegamento esterno, modificatore esterno"
ms.assetid: 1e2f0ae3-ae98-4410-85b5-222d6abc865a
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 11
---
# Utilizzo di extern per specificare un collegamento
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

## Sintassi  
  
```  
  
        extern string-literal { declaration-list }  
extern string-literal declaration  
```  
  
## Note  
 La parola chiave `extern` dichiara una variabile o una funzione e specifica che dispone di collegamento esterno \(il nome relativo è visibile in file diversi da quello in cui è definito\).  Quando si modifica una variabile, `extern` specifica che la variabile ha durata statica \(viene allocata quando il programma viene avviato e disallocata al termine del programma\).  La variabile o la funzione può essere definita in un altro file di origine o successivamente nello stesso file.  Dichiarazioni di variabili e funzioni in ambito file sono esterne per impostazione predefinita.  
  
## Esempio  
  
```  
// specifying_linkage1.cpp  
int i = 1;  
void other();  
  
int main() {  
   // Reference to i, defined above:  
   extern int i;  
}  
  
void other() {  
   // Address of global i assigned to pointer variable:  
   static int *external_i = &i;  
  
   // i will be redefined; global i no longer visible:  
   // int i = 16;  
}  
```  
  
 In C\+\+, se usata con una stringa, `extern` specifica che per i dichiaratori vengono usate le convenzioni del collegamento a un altro linguaggio.  Alle funzioni e ai dati C è possibile accedere solo se in precedenza sono stati dichiarati come dotati di collegamento a C.  Tuttavia, devono essere definiti in una unità di conversione compilata separatamente.  
  
 Microsoft C\+\+ supporta le stringhe **"C"** e **"C\+\+"** nel campo *string\-literal*.  Tutti i file di inclusione standard usano la sintassi `extern` "C" per consentire alle funzioni della libreria di runtime di essere usate nei programmi C\+\+.  
  
## Esempio  
 Nell'esempio seguente vengono illustrati modi alternativi per dichiarare nomi con collegamento C:  
  
```  
// specifying_linkage2.cpp  
// compile with: /c  
// Declare printf with C linkage.  
extern "C" int printf( const char *fmt, ... );  
  
//  Cause everything in the specified header files  
//   to have C linkage.  
extern "C" {  
   // add your #include statements here  
   #include <stdio.h>  
}  
  
//  Declare the two functions ShowChar and GetChar  
//   with C linkage.  
extern "C" {  
   char ShowChar( char ch );  
   char GetChar( void );  
}  
  
//  Define the two functions ShowChar and GetChar  
//   with C linkage.  
extern "C" char ShowChar( char ch ) {  
   putchar( ch );  
   return ch;  
}  
  
extern "C" char GetChar( void ) {  
   char ch;  
  
   ch = getchar();  
   return ch;  
}  
  
// Declare a global variable, errno, with C linkage.  
extern "C" int errno;  
```  
  
 Se una funzione contiene più specifiche di collegamento, queste devono concordare; è un errore dichiarare le funzioni come dotate sia di collegamento C\+\+ che C.  Inoltre, se due dichiarazioni per una funzione si verificano in un programma \- una con una specifica di collegamento e una senza \- la dichiarazione con la specifica di collegamento deve essere specificata per prima.  A tutte le dichiarazioni ridondanti di funzioni che hanno già specifiche di collegamento viene fornito il collegamento specificato nella prima dichiarazione.  Ad esempio:  
  
```  
extern "C" int CFunc1();  
...  
int CFunc1();            // Redeclaration is benign; C linkage is  
                         //  retained.  
  
int CFunc2();  
...  
extern "C" int CFunc2(); // Error: not the first declaration of  
                         //  CFunc2;  cannot contain linkage  
                         //  specifier.  
```  
  
 Funzioni e oggetti dichiarati in modo esplicito come **static** nel corpo di un identificatore di collegamento composto \(**{ }**\) sono considerate come funzioni o oggetti statici; l'identificatore di collegamento viene ignorato.  Altre funzioni e oggetti si comportano come se dichiarati con la parola chiave `extern`.  Per informazioni dettagliate sulla parola chiave `extern`, vedere [Utilizzo di estern per specificare un collegamento](../cpp/using-extern-to-specify-linkage.md).  
  
## Vedere anche  
 [Parole chiave C\+\+](../cpp/keywords-cpp.md)   
 [\(NOTINBUILD\)Linkage Specifications](http://msdn.microsoft.com/it-it/d2b0cff1-7798-4c38-9ac8-61c3bfe2bfb9)   
 [Identificatore di classi di archiviazione extern](../c-language/extern-storage-class-specifier.md)   
 [Comportamento degli identificatori](../c-language/behavior-of-identifiers.md)   
 [Collegamento](../c-language/linkage.md)