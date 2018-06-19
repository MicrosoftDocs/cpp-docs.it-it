---
title: Compilatore avviso (livello 4) C4710 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4710
dev_langs:
- C++
helpviewer_keywords:
- C4710
ms.assetid: 76381ec7-3fc1-4bee-9a0a-c2c8307b92e2
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 4c1cc77d8ee5393fe600ceadd9c1335d76e32efe
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33296387"
---
# <a name="compiler-warning-level-4-c4710"></a>Avviso del compilatore (livello 4) C4710
'function': funzione non resa inline  
  
 La funzione specificata è stata selezionata per l'espansione inline, ma il compilatore non ha eseguito l'incorporamento.  
  
 Inline viene eseguita a discrezione del compilatore. Il **inline** (parola chiave), ad esempio il **registrare** (parola chiave), viene utilizzato come un hint per il compilatore. Il compilatore utilizza l'euristica per determinare se dovrebbe essere inline una funzione specifica per velocizzare il codice durante la compilazione per la velocità o dovrebbe essere inline una funzione specifica per ridurne il codice durante la compilazione per lo spazio. Il compilatore verranno rese inline solo molto piccole funzioni durante la compilazione per lo spazio.  
  
 In alcuni casi, il compilatore verrà non inline una funzione specifica per motivi di meccanici. Vedere [C4714](../../error-messages/compiler-warnings/compiler-warning-level-4-c4714.md) per un elenco di motivi che non inline una funzione.  
  
 Per impostazione predefinita, questo avviso non è attivo. Per altre informazioni, vedere [Avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md) .