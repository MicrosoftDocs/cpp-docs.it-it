---
title: Compilatore (livello 1) Avviso C4124 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C4124
dev_langs: C++
helpviewer_keywords: C4124
ms.assetid: c08c3a65-9584-47a1-a147-44f00c4b230e
caps.latest.revision: "6"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 3de13cb50444530fc0917330771b693f60a7e5f5
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="compiler-warning-level-1-c4124"></a>Compilatore (livello 1) Avviso C4124
fastcall con il controllo dello stack è inefficiente  
  
 Il `__fastcall` (parola chiave) è stato utilizzato con il controllo dello stack abilitato.  
  
 Il `__fastcall` convenzione genera codice più veloce, ma il controllo dello stack rende il codice più lento. Quando si utilizza `__fastcall`, disattivare il controllo dello stack con il **check_stack** pragma o /Gs.  
  
 Questo avviso viene generato solo per la prima funzione dichiarata in queste condizioni.