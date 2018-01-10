---
title: Compilatore avviso (livelli 1 e 4) C4115 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: C4115
dev_langs: C++
helpviewer_keywords: C4115
ms.assetid: f3f94e72-fc49-4d09-b3e7-23d68e61152f
caps.latest.revision: "6"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: ec1c4377c2b7670b9d934d13d09bc5336fe5f30b
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-warning-levels-1-and-4-c4115"></a>Avviso del compilatore (livelli 1 e 4) C4115
'type': definizione di tipo denominato tra parentesi  
  
 Il simbolo specificato viene usato per definire una struttura, un'unione o un tipo enumerato all'interno di un'espressione con parentesi. L'ambito della definizione potrebbe essere imprevisto.  
  
 In una chiamata di funzione C, la definizione ha ambito globale. In una chiamata C++, la definizione ha lo stesso ambito della funzione chiamata.  
  
 L'avviso può anche essere generato da dichiaratori tra parentesi, ad esempio i prototipi, che non sono espressioni con parentesi.  
  
 L'avviso è di livello 1 con i programmi C++ e C compilati in compatibilità ANSI (/Za). Negli altri casi, è di livello 3.