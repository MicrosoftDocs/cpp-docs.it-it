---
title: Stili dei controlli ToolBar
ms.date: 11/04/2016
helpviewer_keywords:
- ToolBar control styles [MFC]
ms.assetid: 0f717eb9-fa32-4263-b852-809238863feb
ms.openlocfilehash: 9ad85ca19235478e6a5aa1d917ebe75e62308be5
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57277573"
---
# <a name="toolbar-control-styles"></a>Stili dei controlli ToolBar

[Classe CMFCToolBarButton](../../mfc/reference/cmfctoolbarbutton-class.md) dispone di un set di flag di stile che determinano l'aspetto e comportamento del pulsante. È possibile impostare una combinazione di questi flag chiamando [CMFCToolBarButton::SetStyle](../../mfc/reference/cmfctoolbarbutton-class.md#setstyle). In questo argomento vengono elencati i valori dei flag di stile e i relativi significati.

## <a name="property-values"></a>Valori delle proprietà

I valori seguenti determinano il tipo di pulsante che il controllo rappresenta:

|||
|-|-|
|TBBS_BUTTON|Pulsante di comando standard (impostazione predefinita).  |
|TBBS_CHECKBOX|Casella di controllo.  |
|TBBS_CHECKGROUP|Inizio di un gruppo di caselle di controllo.  |
|TBBS_GROUP|Inizio di un gruppo di pulsanti.  |
|TBBS_SEPARATOR|Separatore.  |

I valori seguenti rappresentano lo stato corrente del controllo:

|||
|-|-|
|TBBS_CHECKED|Casella di controllo selezionata.  |
|TBBS_DISABLED|Controllo disabilitato.  |
|TBBS_INDETERMINATE|Casella di controllo in uno stato indeterminato.  |
|TBBS_PRESSED|Pulsante premuto.  |

Il valore seguente modifica il layout del pulsante nella barra degli strumenti:

|||
|-|-|
|TBBS_BREAK|Posiziona l'elemento in una nuova riga o in una nuova colonna senza la separazione di colonne.  |

## <a name="remarks"></a>Note

Lo stile corrente viene archiviato in [CMFCToolBarButton::m_nStyle](../../mfc/reference/cmfctoolbarbutton-class.md#m_nstyle). Non impostare un nuovo valore `m_nStyle` direttamente, in quanto alcune classi derivate eseguono elaborazioni aggiuntive quando si chiama `SetStyles`.

Il gestore visualizzazione determina l'aspetto dei pulsanti in ciascuno stato. Visualizzare [gestione visualizzazione](../../mfc/visualization-manager.md) per altre informazioni.

## <a name="requirements"></a>Requisiti

**Intestazione:** afxtoolbarbutton. h

## <a name="see-also"></a>Vedere anche

[Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)<br/>
[Classe CMFCToolBarButton](../../mfc/reference/cmfctoolbarbutton-class.md)<br/>
[Gestione visualizzazione](../../mfc/visualization-manager.md)
