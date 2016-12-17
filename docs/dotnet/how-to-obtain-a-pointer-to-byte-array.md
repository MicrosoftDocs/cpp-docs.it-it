---
title: "Procedura: ottenere un puntatore a una matrice di byte | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "get-started-article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "matrici di byte"
  - "puntatori, a matrice Byte"
ms.assetid: aea18073-3341-47f4-9f0e-04e03327037e
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Procedura: ottenere un puntatore a una matrice di byte
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

È possibile ottenere un puntatore al blocco di matrice in una matrice <xref:System.Byte> recuperando l'indirizzo del primo elemento e assegnandolo a un puntatore.  
  
## Esempio  
  
```  
// pointer_to_Byte_array.cpp  
// compile with: /clr  
using namespace System;  
int main() {  
   Byte bArr[] = {1, 2, 3};  
   Byte* pbArr = &bArr[0];  
  
   array<Byte> ^ bArr2 = gcnew array<Byte>{1,2,3};  
   interior_ptr<Byte> pbArr2 = &bArr2[0];  
}  
```  
  
## Vedere anche  
 [Utilizzo delle funzionalità di interoperabilità C\+\+ \(PInvoke implicito\)](../dotnet/using-cpp-interop-implicit-pinvoke.md)