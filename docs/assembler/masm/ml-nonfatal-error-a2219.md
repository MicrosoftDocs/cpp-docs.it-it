---
description: 'Altre informazioni su: ML errore non irreversibile irreversibile A2219'
title: Errore ML non irreversibile A2219
ms.date: 12/17/2019
ms.custom: error-reference
f1_keywords:
- A2219
helpviewer_keywords:
- A2219
ms.assetid: 5ebc2f40-e47e-4f8e-b7b9-960b9cfc9f6d
ms.openlocfilehash: 3b9fd2f397f702a32784cd696bcbc3a72f35cf95
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97128310"
---
# <a name="ml-nonfatal-error-a2219"></a>Errore ML non irreversibile A2219

> Allineamento non valido per l'offset nel codice di rimozione

## <a name="remarks"></a>Commenti

L'operando per [ &period; ALLOCSTACK](dot-allocstack.md) e [ &period; savereg](dot-savereg.md) deve essere un multiplo di 8.  L'operando per [ &period; SAVEXMM128](dot-savexmm128.md) e [ &period; seframe](dot-setframe.md) deve essere un multiplo di 16.

## <a name="see-also"></a>Vedi anche

[Messaggi di errore ML](ml-error-messages.md)
