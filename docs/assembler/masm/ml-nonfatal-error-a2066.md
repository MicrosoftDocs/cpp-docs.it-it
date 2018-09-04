---
title: Machine Learning errore non irreversibile A2066 | Microsoft Docs
ms.custom: ''
ms.date: 08/30/2018
ms.technology:
- cpp-masm
ms.topic: error-reference
f1_keywords:
- A2066
dev_langs:
- C++
helpviewer_keywords:
- A2066
ms.assetid: 58220fdf-fb8f-47fc-a36d-737867361185
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 8cf5cbe7d5c77da7f129cbc40ffa97f4051afca6
ms.sourcegitcommit: a7046aac86f1c83faba1088c80698474e25fe7c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/04/2018
ms.locfileid: "43690252"
---
# <a name="ml-nonfatal-error-a2066"></a>Errore ML non irreversibile A2066

**dimensioni di modalità e nello stesso segmento della CPU non compatibile**

Si è verificato un tentativo di aprire un segmento con un **USE16**, **USE32**, o **FLAT** attributo che non era compatibile con l'utilizzo della CPU specificato o per modificare a una CPU a 16 bit in 32 bit segmento.

Il **USE32** e **FLAT** attributi devono essere preceduti dal 386 o maggiore della direttiva di processore.

## <a name="see-also"></a>Vedere anche

[Messaggi di errore ML](../../assembler/masm/ml-error-messages.md)<br/>