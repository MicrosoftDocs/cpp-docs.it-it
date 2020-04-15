---
title: Struttura CCreateContext
ms.date: 11/04/2016
f1_keywords:
- CCreateContext
helpviewer_keywords:
- CCreateContext structure [MFC]
ms.assetid: 337a0e44-d910-49a8-afc0-c7207666a9dc
ms.openlocfilehash: 29fc6210b9888b6a5ba5aaf15b66242c29c15dc8
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81369385"
---
# <a name="ccreatecontext-structure"></a>Struttura CCreateContext

Il framework `CCreateContext` utilizza la struttura quando crea le finestre cornice e le visualizzazioni associate a un documento.

## <a name="syntax"></a>Sintassi

```
struct CCreateContext
```

## <a name="remarks"></a>Osservazioni

`CCreateContext`è una struttura e non dispone di una classe base.

Quando si crea una finestra, i valori di questa struttura forniscono le informazioni utilizzate per connettere i componenti di un documento alla visualizzazione dei dati. È necessario utilizzare `CCreateContext` solo se si esegue l'override di parti del processo di creazione.

Una `CCreateContext` struttura contiene puntatori al documento, alla finestra cornice, alla visualizzazione e al modello di documento. Contiene inoltre un puntatore a un `CRuntimeClass` che identifica il tipo di visualizzazione da creare. Le informazioni sulla classe di runtime e il puntatore del documento corrente vengono utilizzati per creare una nuova visualizzazione in modo dinamico. La tabella seguente suggerisce `CCreateContext` come e quando ogni membro può essere utilizzato:

|Membro|Type|A cosa serve|
|------------|----------|--------------------|
|`m_pNewViewClass`|`CRuntimeClass*`|`CRuntimeClass`della nuova vista da creare.|
|`m_pCurrentDoc`|`CDocument*`|Documento esistente da associare alla nuova visualizzazione.|
|`m_pNewDocTemplate`|`CDocTemplate*`|Modello di documento associato alla creazione di una nuova finestra cornice MDI.|
|`m_pLastView`|`CView*`|Vista originale in cui vengono modellate viste aggiuntive, come nella creazione di viste finestra con separatore o nella creazione di una seconda vista su un documento.|
|`m_pCurrentFrame`|`CFrameWnd*`|Finestra cornice in cui vengono modellate finestre cornice aggiuntive, come nella creazione di una seconda finestra cornice in un documento.|

Quando un modello di documento crea un documento e i `CCreateContext` componenti associati, convalida le informazioni archiviate nella struttura. Ad esempio, una vista non deve essere creata per un documento inesistente.

> [!NOTE]
> Tutti i puntatori `CCreateContext` in sono `NULL` facoltativi e possono essere se non specificato o sconosciuto.

`CCreateContext`viene utilizzato dalle funzioni membro elencate in "Vedere anche". Consultare le descrizioni di queste funzioni per informazioni specifiche se si prevede di sostituirle.

Ecco alcune linee guida generali:

- Quando viene passato come argomento per `CWnd::Create` `CFrameWnd::Create`la `CFrameWnd::LoadFrame`creazione di finestre, come in , e , il contesto di creazione specifica a cosa deve essere connessa la nuova finestra. Per la maggior parte delle finestre, l'intera struttura è facoltativa e un `NULL` puntatore può essere passato.

- Per le funzioni membro `CFrameWnd::OnCreateClient`sottoponibili a override, ad esempio , l'argomento `CCreateContext` è facoltativo.

- Per le funzioni membro coinvolte nella creazione della visualizzazione, è necessario fornire informazioni sufficienti per creare la visualizzazione. Ad esempio, per la prima visualizzazione in una finestra con separatore, è necessario fornire le informazioni sulla classe di visualizzazione e il documento corrente.

In generale, se si utilizzano le `CCreateContext`impostazioni predefinite del framework, è possibile ignorare . Se si tenta di apportare modifiche più avanzate, il codice sorgente della libreria Microsoft Foundation Class o i programmi di esempio, ad esempio VIEWEX, guideranno l'utente. Se si dimentica un parametro obbligatorio, un'asserzione framework vi dirà ciò che avete dimenticato.

Per ulteriori `CCreateContext`informazioni su , vedere l'esempio MFC [VIEWEX](../../overview/visual-cpp-samples.md).

## <a name="requirements"></a>Requisiti

**Intestazione:** afxext.h

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[CFrameWnd::Creare](../../mfc/reference/cframewnd-class.md#create)<br/>
[CFrameWnd::LoadFrame](../../mfc/reference/cframewnd-class.md#loadframe)<br/>
[CFrameWnd::OnCreateClient](../../mfc/reference/cframewnd-class.md#oncreateclient)<br/>
[CSplitterWnd::Crea](../../mfc/reference/csplitterwnd-class.md#create)<br/>
[CSplitterWnd::CreateView](../../mfc/reference/csplitterwnd-class.md#createview)<br/>
[CWnd::Create](../../mfc/reference/cwnd-class.md#create)
