---
title: "Avviso del compilatore (livello 2) C4826 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4826"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4826"
ms.assetid: 286f5c1d-8c14-43f7-aaa6-a891db2fdc64
caps.latest.revision: 5
caps.handback.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 2) C4826
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Conversione da 'tipo1' a 'tipo\_2' con segno esteso.Questa situazione può produrre un comportamento imprevisto in fase di esecuzione.  
  
 Questo avviso indica che il compilatore ha eseguito l'estensione del segno nel momento in cui è stato eseguito il cast di un puntatore a 32 bit su una variabile a 64 bit.  
  
 Se l'estensione è stata eseguita su un tipo di HANDLE Windows, è possibile ignorare questo avviso senza rischi di sicurezza.  Se l'estensione è stata eseguita su un tipo puntatore, è necessario modificare il cast per impedire l'estensione del segno \(vedere l'esempio riportato di seguito\).  
  
 Per impostazione predefinita, l'avviso C4826 non è attivo.  Per ulteriori informazioni, vedere [Avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md).  
  
## Esempio  
 Nell'esempio riportato di seguito viene generato l'errore C4826.  
  
```  
// C4826.cpp  
// compile with: /W2 /c  
#include <windows.h>  
#pragma warning(default: 4826)  
  
void * __ptr64 F1 (void * __ptr32 P ) {  
   return (void * __ptr64)P;   // C4826  
   // try the following line instead  
   // return (void * __ptr64)(ULONGLONG)(ULONG)P;  
}  
  
void * __ptr64 F2 ( void * P ) {  
   return (void * __ptr64)P;   // C4826  
   // try the following line instead  
   // return (void * __ptr64)(ULONGLONG)(ULONG)P;  
}  
  
unsigned __int64 F3r ( void * P ) {  
   return (unsigned __int64)P;   // C4826  
   // try the following line instead  
   // return (unsigned __int64)(ULONGLONG)(ULONG)P;  
}  
```