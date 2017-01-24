---
title: "_AddressOfReturnAddress | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "_AddressOfReturnAddress_cpp"
  - "_AddressOfReturnAddress"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_AddressOfReturnAddress (funzione intrinseca)"
  - "AddressOfReturnAddress (funzione intrinseca)"
ms.assetid: c7e10b8c-445e-4236-a602-e2d90200f70a
caps.latest.revision: 17
caps.handback.revision: 15
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _AddressOfReturnAddress
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Specifici di Microsoft**  
  
 Fornisce l'indirizzo della posizione di memoria contenente l'indirizzo di ritorno di una funzione corrente.  Questo indirizzo non può essere utilizzato per accedere ad altri percorsi di memoria, ad esempio gli argomenti della funzione.  
  
## Sintassi  
  
```  
void * _AddressOfReturnAddress();  
```  
  
## Requisiti  
  
|Intrinseco|Architettura|  
|----------------|------------------|  
|`_AddressOfReturnAddress`|x86, [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
  
 **File di intestazione** \<intrin.h\>  
  
## Note  
 Quando `_AddressOfReturnAddress` viene utilizzato in un programma compilato con [\/clr](../build/reference/clr-common-language-runtime-compilation.md), la funzione che contiene la chiamata di `_AddressOfReturnAddress` compilata come funzione nativa.  Quando una funzione compilata come chiamate gestite nella funzione che contiene `_AddressOfReturnAddress`, `_AddressOfReturnAddress` potrebbe non avere come previsto.  
  
 Questa procedura è disponibile solo come intrinseci.  
  
## Esempio  
  
```  
// compiler_intrinsics_AddressOfReturnAddress.cpp  
// processor: x86, x64  
#include <stdio.h>  
#include <intrin.h>  
  
// This function will print three values:  
//   (1) The address retrieved from _AddressOfReturnAdress  
//   (2) The return address stored at the location returned in (1)  
//   (3) The return address retrieved the _ReturnAddress* intrinsic  
// Note that (2) and (3) should be the same address.  
__declspec(noinline)  
void func() {  
   void* pvAddressOfReturnAddress = _AddressOfReturnAddress();  
   printf_s("%p\n", pvAddressOfReturnAddress);  
   printf_s("%p\n", *((void**) pvAddressOfReturnAddress));  
   printf_s("%p\n", _ReturnAddress());  
}  
  
int main() {  
   func();  
}  
```  
  
  **0012FF78 00401058 00401058**   
## Microsoft FINALE specifico  
  
## Vedere anche  
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)   
 [Parole chiave C\+\+](../cpp/keywords-cpp.md)