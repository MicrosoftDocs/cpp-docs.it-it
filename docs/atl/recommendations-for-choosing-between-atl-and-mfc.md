---
description: 'Ulteriori informazioni su: suggerimenti per la scelta tra ATL e MFC'
title: Suggerimenti per la scelta tra ATL e MFC
ms.date: 11/04/2016
helpviewer_keywords:
- MFC, ATL support
- ATL, vs. MFC
ms.assetid: 269325bb-11a8-4330-ad2b-a14a2458679e
ms.openlocfilehash: 506df04ebbd3bc9079e1d40cf14773d9d9a6bd1a
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97159154"
---
# <a name="recommendations-for-choosing-between-atl-and-mfc"></a>Suggerimenti per la scelta tra ATL e MFC

Quando si sviluppano componenti e applicazioni, è possibile scegliere tra due approcci, ovvero ATL e MFC (il libreria Microsoft Foundation Class).

## <a name="using-atl"></a>Uso di ATL

ATL è un modo rapido e semplice per creare un componente COM in C++ e mantenere un footprint ridotto. Usare ATL per creare un controllo se non sono necessarie tutte le funzionalità predefinite fornite automaticamente da MFC.

## <a name="using-mfc"></a>Utilizzo di MFC

MFC consente di creare applicazioni complete, controlli ActiveX e documenti attivi. Se è già stato creato un controllo con MFC, potrebbe essere necessario continuare lo sviluppo in MFC. Quando si crea un nuovo controllo, è consigliabile usare ATL se non sono necessarie tutte le funzionalità predefinite di MFC.

## <a name="using-atl-in-an-mfc-project"></a>Uso di ATL in un progetto MFC

È possibile aggiungere il supporto per l'utilizzo di ATL in un progetto MFC esistente mediante l'esecuzione di una procedura guidata. Per informazioni dettagliate, vedere [aggiunta del supporto ATL al progetto MFC](../mfc/reference/adding-atl-support-to-your-mfc-project.md).

## <a name="see-also"></a>Vedi anche

[Introduzione a ATL](../atl/introduction-to-atl.md)
