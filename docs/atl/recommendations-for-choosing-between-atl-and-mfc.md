---
title: Suggerimenti per la scelta tra ATL e MFC | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- MFC, ATL support
- ATL, vs. MFC
ms.assetid: 269325bb-11a8-4330-ad2b-a14a2458679e
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 0a9bbf30c728b6562da0c56c25b177697f0882a5
ms.sourcegitcommit: 92dbc4b9bf82fda96da80846c9cfcdba524035af
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/05/2018
ms.locfileid: "43762125"
---
# <a name="recommendations-for-choosing-between-atl-and-mfc"></a>Suggerimenti per la scelta tra ATL e MFC

Durante lo sviluppo di applicazioni e componenti, è possibile scegliere tra due approcci, ATL e MFC (la libreria Microsoft Foundation Class).

## <a name="using-atl"></a>Utilizzo di ATL

ATL è un modo semplice e rapido per creare un componente COM in C++ e mantenere un footprint ridotto. Per creare un controllo se non sono necessarie tutte le funzionalità incorporate che MFC fornisce automaticamente, utilizzare ATL.

## <a name="using-mfc"></a>Utilizzo di MFC

MFC consente di creare applicazioni complete, controlli ActiveX e i documenti attivi. Se è già stato creato un controllo con MFC, è possibile continuare lo sviluppo in MFC. Quando si crea un nuovo controllo, è consigliabile utilizzare ATL se non sono necessarie le funzionalità predefinite di MFC.

## <a name="using-atl-in-an-mfc-project"></a>Utilizzo di ATL in un progetto MFC

È possibile aggiungere il supporto per ATL in un progetto MFC esistente eseguendo una procedura guidata. Per informazioni dettagliate, vedere [aggiunta del supporto ATL a un progetto MFC](../mfc/reference/adding-atl-support-to-your-mfc-project.md).

## <a name="see-also"></a>Vedere anche

[Introduzione a ATL](../atl/introduction-to-atl.md)

