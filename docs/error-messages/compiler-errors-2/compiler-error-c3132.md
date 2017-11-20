---
title: Errore del compilatore C3132 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C3132
dev_langs: C++
helpviewer_keywords: C3132
ms.assetid: d54a3d12-336a-4ed0-ad4e-43cddac33b5e
caps.latest.revision: "10"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 4922c6095381b42c0b01052421e19f841932be5b
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="compiler-error-c3132"></a>Errore del compilatore C3132
'parametro di funzione': le matrici di parametri è applicabile solo a un argomento formale di tipo 'matrice gestita unidimensionale'  
  
 Il [ParamArray](https://msdn.microsoft.com/en-us/library/system.paramarrayattribute.aspx) attributo è stato applicato a un parametro che non rappresenta una matrice unidimensionale.  
  
 L'esempio seguente genera l'errore C3132:  
  
```  
// C3132.cpp  
// compile with: /clr /c  
using namespace System;  
void f( [ParamArray] Int32[,] );   // C3132  
void g( [ParamArray] Int32[] );   // C3132  
  
void h( [ParamArray] array<Char ^> ^ MyArray );   // OK  
  
```