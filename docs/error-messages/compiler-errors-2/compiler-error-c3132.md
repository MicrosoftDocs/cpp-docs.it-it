---
title: "Errore del compilatore C3132 | Microsoft Docs"
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
  - "C3132"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3132"
ms.assetid: d54a3d12-336a-4ed0-ad4e-43cddac33b5e
caps.latest.revision: 10
caps.handback.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3132
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'parametro\-funzione': le matrici di parametri possono essere applicate solo a un argomento formale di tipo 'matrice gestita unidimensionale'  
  
 L'attributo [ParamArray](https://msdn.microsoft.com/en-us/library/system.paramarrayattribute.aspx) è stato applicato a un parametro che non rappresenta una matrice unidimensionale.  
  
 Il seguente codice di esempio genera l'errore C3132:  
  
```  
// C3132.cpp  
// compile with: /clr /c  
using namespace System;  
void f( [ParamArray] Int32[,] );   // C3132  
void g( [ParamArray] Int32[] );   // C3132  
  
void h( [ParamArray] array<Char ^> ^ MyArray );   // OK  
  
```