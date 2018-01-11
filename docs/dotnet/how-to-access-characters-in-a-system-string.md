---
title: 'Procedura: accedere ai caratteri in un System:: String | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: get-started-article
dev_langs: C++
helpviewer_keywords:
- characters [C++], accessing in System::String
- examples [C++], strings
- strings [C++], accessing characters
ms.assetid: cfc89756-aef3-4988-907e-fb236dcb7087
caps.latest.revision: "11"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 888370cac57025418bc70b322703d8569a4be3d0
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="how-to-access-characters-in-a-systemstring"></a>Procedura: accedere ai caratteri in System::String
È possibile accedere ai caratteri di un <xref:System.String> oggetto per chiamate ad alte prestazioni a non gestito, le funzioni che accettano `wchar_t*` stringhe. Il metodo restituisce un puntatore interno al primo carattere del <xref:System.String> oggetto. L'indicatore di misura possono essere manipolati direttamente o bloccato e passato a una funzione che prevede un normale `wchar_t` stringa.  
  
## <a name="example"></a>Esempio  
 `PtrToStringChars`Restituisce un <xref:System.Char>, ovvero un puntatore interno (noto anche come un `byref`). Di conseguenza, è sottoposte a garbage collection. Non è necessario bloccare l'indicatore di misura a meno che non si intende passare a una funzione nativa.  
  
 Si consideri il codice seguente.  Il blocco non è necessario perché `ppchar` è un puntatore interno e se il garbage collector Sposta la stringa punta a, verrà aggiornato anche `ppchar`. Senza un [pin_ptr (C + + CLI)](../windows/pin-ptr-cpp-cli.md), il codice verrà eseguito correttamente e che non have il potenziale calo di prestazioni causato dal blocco.  
  
 Se si passa `ppchar` a una funzione nativa, quindi deve essere un puntatore di blocco; il garbage collector non sarà in grado di aggiornare tutti i puntatori al frame dello stack non gestito.  
  
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
  
```Output  
abcdefg  
```  
  
## <a name="example"></a>Esempio  
 Questo esempio viene illustrato il blocco in cui è necessario.  
  
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
  
```Output  
7  
```  
  
## <a name="example"></a>Esempio  
 Un puntatore interno dispone di tutte le proprietà del puntatore C++ nativo. Ad esempio, è possibile utilizzare per scorrere una struttura di dati collegati ed eseguire inserimenti ed eliminazioni utilizzando solo un puntatore:  
  
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
  
## <a name="see-also"></a>Vedere anche  
 [Uso delle funzionalità di interoperabilità C++ (PInvoke implicito)](../dotnet/using-cpp-interop-implicit-pinvoke.md)