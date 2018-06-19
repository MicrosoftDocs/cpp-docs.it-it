---
title: Errore del compilatore C3507 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3507
dev_langs:
- C++
helpviewer_keywords:
- C3507
ms.assetid: 75f89767-f6f9-40f6-9820-81a49e09abdf
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 008267fddbd1d83574081d7b257e6627b32a1f58
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33252917"
---
# <a name="compiler-error-c3507"></a>Errore del compilatore C3507
un ProgID può avere non più di 39 caratteri 'id'; né contenere punteggiatura oltre a '.'; né iniziare con una cifra  
  
 Il [progid](../../windows/progid.md) presenta limitazioni sui valori che possono essere necessari.  
  
 L'esempio seguente genera l'errore C3507:  
  
```  
// C3507.cpp  
[module(name="x")];  
[  
coclass,  
progid("0123456789012345678901234567890123456789"),  
uuid("00000000-0000-0000-0000-000000000001") // C3507 expected  
]  
struct CMyStruct {  
};  
int main() {  
}  
```