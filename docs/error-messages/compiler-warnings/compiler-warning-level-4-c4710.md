---
title: Compilatore avviso (livello 4) C4710 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C4710
dev_langs:
- C++
helpviewer_keywords:
- C4710
ms.assetid: 76381ec7-3fc1-4bee-9a0a-c2c8307b92e2
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: e0464d924c21a029a97a8f03d30f88127f3aea6a
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-warning-level-4-c4710"></a>Avviso del compilatore (livello 4) C4710
'function': funzione non resa inline  
  
 La funzione specificata è stata selezionata per l'espansione inline, ma il compilatore non ha eseguito l'incorporamento.  
  
 Inline viene eseguita a discrezione del compilatore. Il **inline** (parola chiave), ad esempio il **registrare** (parola chiave), viene utilizzato come un hint per il compilatore. Il compilatore utilizza l'euristica per determinare se dovrebbe essere inline una funzione specifica per velocizzare il codice durante la compilazione per la velocità o dovrebbe essere inline una funzione specifica per ridurne il codice durante la compilazione per lo spazio. Il compilatore verranno rese inline solo molto piccole funzioni durante la compilazione per lo spazio.  
  
 In alcuni casi, il compilatore verrà non inline una funzione specifica per motivi di meccanici. Vedere [C4714](../../error-messages/compiler-warnings/compiler-warning-level-4-c4714.md) per un elenco di motivi che non inline una funzione.  
  
 Per impostazione predefinita, questo avviso non è attivo. Per altre informazioni, vedere [Avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md) .