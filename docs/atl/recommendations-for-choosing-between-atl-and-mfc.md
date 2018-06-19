---
title: Suggerimenti per la scelta tra ATL e MFC | Documenti Microsoft
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
ms.openlocfilehash: 116f2066b98951aa2a470021f5527542ac8cbe46
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32357323"
---
# <a name="recommendations-for-choosing-between-atl-and-mfc"></a>Suggerimenti per la scelta tra ATL e MFC
Quando si sviluppano applicazioni e componenti, è possibile scegliere tra due approcci, ATL e MFC (la libreria Microsoft Foundation Class).  
  
## <a name="using-atl"></a>Utilizzo di ATL  
 ATL è un modo semplice e rapido per creare un componente COM in C++ sia di dimensioni ridotte. Utilizzare ATL per creare un controllo se non sono necessarie tutte le funzionalità predefinite fornita automaticamente da MFC.  
  
## <a name="using-mfc"></a>Utilizzo di MFC  
 MFC consente di creare applicazioni complete, controlli ActiveX e documenti attivi. Se è già stato creato un controllo con MFC, si desidera continuare lo sviluppo in MFC. Quando si crea un nuovo controllo, utilizzare ATL se non sono necessarie le funzionalità predefinite di MFC.  
  
## <a name="using-atl-in-an-mfc-project"></a>Utilizzo di ATL in un progetto MFC  
 È possibile aggiungere il supporto per l'uso di ATL in un progetto MFC esistente eseguendo una procedura guidata. Per informazioni dettagliate, vedere [aggiunta del supporto ATL a un progetto MFC](../mfc/reference/adding-atl-support-to-your-mfc-project.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Introduzione a ATL](../atl/introduction-to-atl.md)

