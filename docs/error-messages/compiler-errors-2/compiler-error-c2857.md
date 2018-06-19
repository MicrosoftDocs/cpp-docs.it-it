---
title: Errore del compilatore C2857 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2857
dev_langs:
- C++
helpviewer_keywords:
- C2857
ms.assetid: b57302bd-58ec-45ae-992a-1e282d5eeccc
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 4bb2ec5047646bea420bf109f18a72d87a8f7c44
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33246347"
---
# <a name="compiler-error-c2857"></a>Errore del compilatore C2857
' #include ' specificata con l'opzione della riga di comando /Yc ' nomefile ' istruzione non è stato trovato nel file di origine  
  
 Il [/Yc](../../build/reference/yc-create-precompiled-header-file.md) opzione specifica il nome di un file di inclusione che non è incluso nel file di origine che si sta compilando.  
  
 Questo errore può essere causato da un `#include` istruzione in un blocco di compilazione condizionale non è stato compilato.