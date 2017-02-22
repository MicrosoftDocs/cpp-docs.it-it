---
title: "Utilizzo di exit o return | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "Exit"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "exit (funzione)"
  - "return (parola chiave) [C++], utilizzo per chiusura del programma"
ms.assetid: b5136c5c-2505-4229-8691-2a1d6a98760b
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# Utilizzo di exit o return
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Quando si chiama **exit** o si esegue un'istruzione `return` da **main**, gli oggetti statici vengono eliminati nell'ordine inverso rispetto all'inizializzazione.  Nell'esempio seguente viene mostrato come funziona un'inizializzazione e una pulizia di questo tipo.  
  
## Esempio  
  
```  
// using_exit_or_return1.cpp  
#include <stdio.h>  
class ShowData {  
public:  
   // Constructor opens a file.  
   ShowData( const char *szDev ) {  
   errno_t err;  
      err = fopen_s(&OutputDev, szDev, "w" );  
   }  
  
   // Destructor closes the file.  
   ~ShowData() { fclose( OutputDev ); }  
  
   // Disp function shows a string on the output device.  
   void Disp( char *szData ) {   
      fputs( szData, OutputDev );  
   }  
private:  
   FILE *OutputDev;  
};  
  
//  Define a static object of type ShowData. The output device  
//   selected is "CON" -- the standard output device.  
ShowData sd1 = "CON";  
  
//  Define another static object of type ShowData. The output  
//   is directed to a file called "HELLO.DAT"  
ShowData sd2 = "hello.dat";  
  
int main() {  
   sd1.Disp( "hello to default device\n" );  
   sd2.Disp( "hello to file hello.dat\n" );  
}  
```  
  
 Nell'esempio precedente, gli oggetti statici `sd1` e `sd2` vengono creati e inizializzati prima della voce a `main`.  Dopo che l'esecuzione del programma termina mediante l'istruzione `return`, il primo `sd2` viene eliminato e quindi `sd1`.  Il distruttore della classe `ShowData` chiude i file associati a questi oggetti statici. Per ulteriori informazioni sull'inizializzazione, sui costruttori e sui distruttori, vedere [Funzioni membro speciali](../misc/special-member-functions-cpp.md)\).  
  
 Un altro modo per scrivere il codice consiste nel dichiarare gli oggetti `ShowData` con ambito blocco, consentendogli di essere eliminati quando escono dall'ambito:  
  
```  
int main() {  
   ShowData sd1, sd2( "hello.dat" );  
  
   sd1.Disp( "hello to default device\n" );  
   sd2.Disp( "hello to file hello.dat\n" );  
}  
```  
  
## Vedere anche  
 [Considerazioni di terminazione aggiuntive](../cpp/additional-termination-considerations.md)