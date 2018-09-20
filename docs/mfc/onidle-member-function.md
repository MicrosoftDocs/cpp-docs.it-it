---
title: Funzione membro OnIdle | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
f1_keywords:
- OnIdle
dev_langs:
- C++
helpviewer_keywords:
- processing messages [MFC]
- OnIdle method [MFC]
- idle loop processing [MFC]
- CWinApp class [MFC], OnIdle method [MFC]
- message handling [MFC], OnIdle method [MFC]
ms.assetid: 51adc874-0075-4f76-be1c-79283f46c10b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 9b334a4561af40b69bc367ab5b1129afa8fb29ae
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46377298"
---
# <a name="onidle-member-function"></a>Funzione membro OnIdle

Quando non vengono elaborati messaggi di Windows, il framework chiama il [CWinApp](../mfc/reference/cwinapp-class.md) funzione membro [OnIdle](../mfc/reference/cwinapp-class.md#onidle) (descritto nel riferimento alla libreria MFC).

Eseguire l'override `OnIdle` per eseguire le attività in background. La versione predefinita di aggiornare lo stato di oggetti dell'interfaccia utente, ad esempio i pulsanti della barra degli strumenti ed esegue la pulizia degli oggetti temporanei creati dal framework durante lo svolgimento delle operazioni. La figura seguente illustra come il ciclo di messaggi chiama `OnIdle` quando non sono presenti messaggi nella coda.

![Processo del ciclo di messaggi](../mfc/media/vc387c1.gif "vc387c1") il ciclo di messaggi

Per altre informazioni sulle operazioni eseguibili nel ciclo inattivo, vedere [elaborazione di cicli di inattività](../mfc/idle-loop-processing.md).

## <a name="see-also"></a>Vedere anche

[CWinApp: classe Application](../mfc/cwinapp-the-application-class.md)
