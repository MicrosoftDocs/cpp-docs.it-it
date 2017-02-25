---
title: "Procedura: accedere ai caratteri in System::String | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "get-started-article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "caratteri [C++], accesso in System::String"
  - "esempi [C++], stringhe"
  - "stringhe [C++], accesso ai caratteri"
ms.assetid: cfc89756-aef3-4988-907e-fb236dcb7087
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 9
---
# Procedura: accedere ai caratteri in System::String
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

È possibile accedere ai caratteri di un oggetto <xref:System.String> per migliorare le prestazioni delle chiamate a funzioni non gestite che accettano stringhe `wchar_t*`.  Questo metodo genera un puntatore interno al primo carattere dell'oggetto <xref:System.String>,  che può essere modificato direttamente oppure bloccato e passato a una funzione che si aspetta una normale stringa `wchar_t`.  
  
## Esempio  
 `PtrToStringChars` restituisce un oggetto <xref:System.Char>, ossia un puntatore interno \(detto anche `byref`\),  ed è quindi soggetto alla Garbage Collection.  Si consiglia di non bloccare questo puntatore, a meno che non si desideri passarlo a una funzione nativa.  
  
 Si consideri il codice riportato di seguito.  Il blocco non è necessario perché `ppchar` è un puntatore interno e, se il Garbage Collector sposta la stringa indicata da tale puntatore, verrà aggiornato anche `ppchar`.  Senza un [pin\_ptr \(C\+\+\/CLI\)](../windows/pin-ptr-cpp-cli.md), il codice funzionerà correttamente e non si verificherà il possibile calo di prestazioni causato dal blocco.  
  
 Se si passa `ppchar`  a una funzione nativa, questo oggetto deve essere un puntatore di blocco. Il Garbage Collector, infatti, non sarà in grado di aggiornare gli eventuali puntatori sullo stack frame non gestito.  
  
```  
// PtrToStringChars.cpp  
// compile with: /clr  
#include<vcclr.h>  
using namespace System;  
  
int main() {  
   String ^ mystring = "abcdefg";  
  
   interior_ptr<const Char> ppchar = PtrToStringChars( mystring );  
  
   for ( ; *ppchar != L'\0'; ++ppchar )  
      Console::Write(*ppchar);  
}  
```  
  
  **abcdefg**   
## Esempio  
 In questo esempio viene illustrato quando il blocco è necessario.  
  
```  
// PtrToStringChars_2.cpp  
// compile with: /clr  
#include <string.h>  
#include <vcclr.h>  
// using namespace System;  
  
size_t getlen(System::String ^ s) {  
   // Since this is an outside string, we want to be secure.  
   // To be secure, we need a maximum size.  
   size_t maxsize = 256;  
   // make sure it doesn't move during the unmanaged call  
   pin_ptr<const wchar_t> pinchars = PtrToStringChars(s);  
   return wcsnlen(pinchars, maxsize);  
};  
  
int main() {  
   System::Console::WriteLine(getlen("testing"));  
}  
```  
  
 **7**   
## Esempio  
 Un puntatore interno dispone di tutte le proprietà di un puntatore C\+\+ nativo.  Ad esempio, è possibile utilizzarlo per accedere a una struttura di dati collegata ed eseguire inserimenti ed eliminazioni utilizzando un unico puntatore:  
  
```  
// PtrToStringChars_3.cpp  
// compile with: /clr /LD  
using namespace System;  
ref struct ListNode {  
   Int32 elem;   
   ListNode ^ Next;  
};  
  
void deleteNode( ListNode ^ list, Int32 e ) {   
   interior_ptr<ListNode ^> ptrToNext = &list;  
   while (*ptrToNext != nullptr) {  
      if ( (*ptrToNext) -> elem == e )  
         *ptrToNext = (*ptrToNext) -> Next;   // delete node  
      else  
         ptrToNext = &(*ptrToNext) -> Next;   // move to next node  
   }  
}  
```  
  
## Vedere anche  
 [Utilizzo delle funzionalità di interoperabilità C\+\+ \(PInvoke implicito\)](../dotnet/using-cpp-interop-implicit-pinvoke.md)