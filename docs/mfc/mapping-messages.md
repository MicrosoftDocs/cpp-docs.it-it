---
description: 'Altre informazioni su: mapping dei messaggi'
title: Mapping dei messaggi
ms.date: 11/04/2016
helpviewer_keywords:
- message maps [MFC], about message maps
- mappings [MFC], commands
- commands [MFC], mapping
- command mapping [MFC]
- message handling [MFC], connecting to handler functions
- commands [MFC], connecting to handler functions
- mappings [MFC], messages
- messages [MFC], mapping
ms.assetid: 996f0652-0698-4b8c-b893-cdaa836d9d0f
ms.openlocfilehash: 34d100a7ae527acc9f5520474e75b486b2f6276c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97280794"
---
# <a name="mapping-messages"></a>Mapping dei messaggi

Ogni classe Framework che può ricevere messaggi o comandi ha una propria "mappa messaggi". Il Framework usa le mappe messaggi per connettere messaggi e comandi alle relative funzioni di gestione. Qualsiasi classe derivata dalla classe `CCmdTarget` può disporre di una mappa messaggi. Altri articoli illustrano in dettaglio le mappe messaggi e descrivono come usarle.

Nonostante il nome "mappa messaggi", le mappe messaggi gestiscono sia i messaggi che i comandi, tutte e tre le categorie di messaggi elencate nelle [categorie](message-categories.md)dei messaggi.

## <a name="see-also"></a>Vedi anche

[Messaggi e comandi nel Framework](messages-and-commands-in-the-framework.md)
