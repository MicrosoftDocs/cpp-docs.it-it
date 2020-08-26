---
title: Stili dei controlli ToolBar
ms.date: 11/04/2016
helpviewer_keywords:
- ToolBar control styles [MFC]
ms.assetid: 0f717eb9-fa32-4263-b852-809238863feb
ms.openlocfilehash: eab4dbde68fcebdb0afd0d058b4678c464874c81
ms.sourcegitcommit: ec6dd97ef3d10b44e0fedaa8e53f41696f49ac7b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/25/2020
ms.locfileid: "88837125"
---
# <a name="toolbar-control-styles"></a>Stili dei controlli ToolBar

La [classe CMFCToolBarButton](../../mfc/reference/cmfctoolbarbutton-class.md) dispone di un set di flag di stile che determinano l'aspetto e il comportamento del pulsante. È possibile impostare una combinazione di questi flag chiamando [CMFCToolBarButton:: Sestyle](../../mfc/reference/cmfctoolbarbutton-class.md#setstyle). In questo argomento vengono elencati i valori dei flag di stile e i relativi significati.

## <a name="property-values"></a>Valori della proprietà

I valori seguenti determinano il tipo di pulsante che il controllo rappresenta:

|Nome|Descrizione|
|-|-|
|TBBS_BUTTON|Pulsante di comando standard (impostazione predefinita).  |
|TBBS_CHECKBOX|Casella di controllo.  |
|TBBS_CHECKGROUP|Inizio di un gruppo di caselle di controllo.  |
|TBBS_GROUP|Inizio di un gruppo di pulsanti.  |
|TBBS_SEPARATOR|Separatore.  |

I valori seguenti rappresentano lo stato corrente del controllo:

|Nome|Descrizione|
|-|-|
|TBBS_CHECKED|Casella di controllo selezionata.  |
|TBBS_DISABLED|Controllo disabilitato.  |
|TBBS_INDETERMINATE|Casella di controllo in uno stato indeterminato.  |
|TBBS_PRESSED|Pulsante premuto.  |

Il valore seguente modifica il layout del pulsante nella barra degli strumenti:

|Nome|Descrizione|
|-|-|
|TBBS_BREAK|Posiziona l'elemento in una nuova riga o in una nuova colonna senza la separazione di colonne.  |

## <a name="remarks"></a>Osservazioni

Lo stile corrente viene archiviato in [CMFCToolBarButton:: m_nStyle](../../mfc/reference/cmfctoolbarbutton-class.md#m_nstyle). Non impostare direttamente un nuovo valore in                 `m_nStyle` , perché alcune classi derivate eseguono un'elaborazione aggiuntiva quando si chiama `SetStyles` .

Il gestore visualizzazione determina l'aspetto dei pulsanti in ciascuno stato. Per ulteriori informazioni, vedere [Gestione visualizzazioni](../../mfc/visualization-manager.md) .

## <a name="requirements"></a>Requisiti

**Intestazione:** afxtoolbarbutton. h

## <a name="see-also"></a>Vedere anche

[Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)<br/>
[Classe CMFCToolBarButton](../../mfc/reference/cmfctoolbarbutton-class.md)<br/>
[Gestione visualizzazioni](../../mfc/visualization-manager.md)
