---
title: Compilatore avviso (livelli 1 e 4) C4115 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4115
dev_langs:
- C++
helpviewer_keywords:
- C4115
ms.assetid: f3f94e72-fc49-4d09-b3e7-23d68e61152f
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 2edfdc84ee38e20f7193d720eab0ccb58d30790b
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33294193"
---
# <a name="compiler-warning-levels-1-and-4-c4115"></a>Avviso del compilatore (livelli 1 e 4) C4115
'type': definizione di tipo denominato tra parentesi  
  
 Il simbolo specificato viene usato per definire una struttura, un'unione o un tipo enumerato all'interno di un'espressione con parentesi. L'ambito della definizione potrebbe essere imprevisto.  
  
 In una chiamata di funzione C, la definizione ha ambito globale. In una chiamata C++, la definizione ha lo stesso ambito della funzione chiamata.  
  
 L'avviso può anche essere generato da dichiaratori tra parentesi, ad esempio i prototipi, che non sono espressioni con parentesi.  
  
 L'avviso è di livello 1 con i programmi C++ e C compilati in compatibilità ANSI (/Za). Negli altri casi, è di livello 3.