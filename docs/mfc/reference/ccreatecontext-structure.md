---
description: 'Altre informazioni su: struttura CCreateContext'
title: Struttura CCreateContext
ms.date: 11/04/2016
f1_keywords:
- CCreateContext
helpviewer_keywords:
- CCreateContext structure [MFC]
ms.assetid: 337a0e44-d910-49a8-afc0-c7207666a9dc
ms.openlocfilehash: b0d8c3a38d4d6ce9ee6130092ea6b27a50ed15e3
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97220461"
---
# <a name="ccreatecontext-structure"></a>Struttura CCreateContext

Il Framework usa la `CCreateContext` struttura quando crea le finestre cornice e le visualizzazioni associate a un documento.

## <a name="syntax"></a>Sintassi

```
struct CCreateContext
```

## <a name="remarks"></a>Osservazioni

`CCreateContext` è una struttura e non dispone di una classe base.

Quando si crea una finestra, i valori in questa struttura forniscono le informazioni utilizzate per connettere i componenti di un documento alla visualizzazione dei relativi dati. È necessario utilizzare solo `CCreateContext` se si esegue l'override di parti del processo di creazione.

Una `CCreateContext` struttura contiene puntatori al documento, alla finestra cornice, alla visualizzazione e al modello di documento. Contiene inoltre un puntatore a un oggetto `CRuntimeClass` che identifica il tipo di visualizzazione da creare. Le informazioni sulla classe di runtime e il puntatore del documento corrente vengono utilizzati per creare una nuova visualizzazione dinamicamente. La tabella seguente indica come e quando `CCreateContext` è possibile usare ogni membro:

|Membro|Type|Per informazioni|
|------------|----------|--------------------|
|`m_pNewViewClass`|`CRuntimeClass*`|`CRuntimeClass` della nuova visualizzazione da creare.|
|`m_pCurrentDoc`|`CDocument*`|Documento esistente da associare alla nuova visualizzazione.|
|`m_pNewDocTemplate`|`CDocTemplate*`|Modello di documento associato alla creazione di una nuova finestra cornice MDI.|
|`m_pLastView`|`CView*`|Visualizzazione originale in cui sono modellate le visualizzazioni aggiuntive, come nella creazione di visualizzazioni finestra con separatore o nella creazione di una seconda visualizzazione in un documento.|
|`m_pCurrentFrame`|`CFrameWnd*`|La finestra cornice in cui vengono modellate le finestre cornice aggiuntive, come nella creazione di una seconda finestra cornice in un documento.|

Quando un modello di documento crea un documento e i componenti associati, convalida le informazioni archiviate nella `CCreateContext` struttura. Una vista, ad esempio, non deve essere creata per un documento inesistente.

> [!NOTE]
> Tutti i puntatori in `CCreateContext` sono facoltativi e possono essere `NULL` se non è specificato o è sconosciuto.

`CCreateContext` viene usato dalle funzioni membro elencate in "vedere anche". Per informazioni specifiche, consultare le descrizioni di queste funzioni se si prevede di eseguirne l'override.

Di seguito sono riportate alcune linee guida generali:

- Quando viene passato come argomento per la creazione della finestra, come in `CWnd::Create` , `CFrameWnd::Create` e `CFrameWnd::LoadFrame` , il contesto di creazione specifica a quale deve essere connessa la nuova finestra. Per la maggior parte delle finestre, l'intera struttura è facoltativa e `NULL` può essere passato un puntatore.

- Per le funzioni membro sottoponibili a override, ad esempio `CFrameWnd::OnCreateClient` , l' `CCreateContext` argomento è facoltativo.

- Per le funzioni membro necessarie per la creazione della visualizzazione, è necessario fornire informazioni sufficienti per creare la visualizzazione. Per la prima visualizzazione in una finestra con separatore, ad esempio, è necessario fornire le informazioni sulla classe di visualizzazione e il documento corrente.

In generale, se si usano le impostazioni predefinite del Framework, è possibile ignorare `CCreateContext` . Se si tentano modifiche più avanzate, il codice sorgente libreria Microsoft Foundation Class o i programmi di esempio, ad esempio Sample, forniranno una guida. Se si dimentica un parametro obbligatorio, un'asserzione del Framework consentirà di indicare gli elementi dimenticati.

Per ulteriori informazioni su `CCreateContext` , vedere l'esempio MFC [Sample](../../overview/visual-cpp-samples.md).

## <a name="requirements"></a>Requisiti

**Intestazione:** AFXEXT. h

## <a name="see-also"></a>Vedi anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[CFrameWnd:: create](../../mfc/reference/cframewnd-class.md#create)<br/>
[CFrameWnd:: LoadFrame](../../mfc/reference/cframewnd-class.md#loadframe)<br/>
[CFrameWnd:: OnCreateClient](../../mfc/reference/cframewnd-class.md#oncreateclient)<br/>
[CSplitterWnd:: create](../../mfc/reference/csplitterwnd-class.md#create)<br/>
[CSplitterWnd:: CreateView](../../mfc/reference/csplitterwnd-class.md#createview)<br/>
[CWnd::Create](../../mfc/reference/cwnd-class.md#create)
