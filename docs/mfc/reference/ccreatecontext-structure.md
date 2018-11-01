---
title: Struttura CCreateContext
ms.date: 11/04/2016
f1_keywords:
- CCreateContext
helpviewer_keywords:
- CCreateContext structure [MFC]
ms.assetid: 337a0e44-d910-49a8-afc0-c7207666a9dc
ms.openlocfilehash: dd5659e7f91e3a2a1d653b61f12323ed1ae5a9b4
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50438957"
---
# <a name="ccreatecontext-structure"></a>Struttura CCreateContext

Il framework utilizza la `CCreateContext` struttura durante la creazione di finestre cornice e viste associate a un documento.

## <a name="syntax"></a>Sintassi

```
struct CCreateContext
```

## <a name="remarks"></a>Note

`CCreateContext` è una struttura e non dispone di una classe di base.

Quando si crea una finestra, i valori in questa struttura forniscono le informazioni usate per connettere i componenti di un documento per la visualizzazione dei dati. È sufficiente usare `CCreateContext` se si esegue l'override di parti del processo di creazione.

Oggetto `CCreateContext` struttura contiene i puntatori al documento, la finestra cornice, la visualizzazione e il modello di documento. Include inoltre un puntatore a un `CRuntimeClass` che identifica il tipo di visualizzazione da creare. Le informazioni sulla classe di runtime e il puntatore di documento corrente vengono usati per creare una nuova vista in modo dinamico. La seguente tabella suggerisce i casi in cui ogni `CCreateContext` membro può essere utilizzato:

|Member|Tipo|Che cos'è per|
|------------|----------|--------------------|
|`m_pNewViewClass`|`CRuntimeClass*`|`CRuntimeClass` della nuova vista da creare.|
|`m_pCurrentDoc`|`CDocument*`|Il documento esistente da associare alla nuova vista.|
|`m_pNewDocTemplate`|`CDocTemplate*`|Il modello di documento associato alla creazione di una nuova finestra cornice MDI.|
|`m_pLastView`|`CView*`|La visualizzazione originale in cui vengono modellate visualizzazioni aggiuntive, come la creazione di una seconda vista su un documento o la creazione di visualizzazioni della finestra con separatore.|
|`m_pCurrentFrame`|`CFrameWnd*`|La finestra cornice sul quale sono modellate finestre cornice aggiuntive, come la creazione di una seconda finestra cornice in un documento.|

Quando un modello di documento crea un documento e i relativi componenti, convalida le informazioni archiviate nel `CCreateContext` struttura. Ad esempio, una vista non deve essere creata per un documento esistente.

> [!NOTE]
>  Tutti i puntatori negli `CCreateContext` sono facoltativi e possono essere `NULL` se non specificato o sconosciuto.

`CCreateContext` viene usato dalle funzioni membro elencate in "Vedere anche". Per informazioni specifiche, se si prevede di eseguirne l'override, vedere le descrizioni di queste funzioni.

Ecco alcune linee guida generali:

- Quando viene passato come argomento per la creazione della finestra, come in `CWnd::Create`, `CFrameWnd::Create`, e `CFrameWnd::LoadFrame`, il contesto di creazione specifica ciò che la nuova finestra deve essere connesse a. Per la maggior parte delle finestre, l'intera struttura è facoltativo e un `NULL` puntatore può essere passato.

- Per le funzioni membro sottoponibile a override, ad esempio `CFrameWnd::OnCreateClient`, il `CCreateContext` argomento è facoltativo.

- Per le funzioni membro coinvolte nella visualizzazione creazione, è necessario fornire informazioni sufficienti per creare la vista. Per la prima visualizzazione in una finestra con separatore, ad esempio, è necessario fornire le informazioni sulla classe di visualizzazione e il documento corrente.

In generale, se si usano le impostazioni predefinite di framework, è possibile ignorare `CCreateContext`. Se si tenta di modifiche più avanzate, il codice sorgente libreria Microsoft Foundation Class o i programmi di esempio, ad esempio, viene guiderà l'utente. Se si dimentica un parametro obbligatorio, un'asserzione di framework indicherà che cosa si è dimenticata.

Per ulteriori informazioni sul `CCreateContext`, vedere l'esempio MFC [2x1 viene](../../visual-cpp-samples.md).

## <a name="requirements"></a>Requisiti

**Intestazione:** AFXEXT. h

## <a name="see-also"></a>Vedere anche

[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[CFrameWnd::Create](../../mfc/reference/cframewnd-class.md#create)<br/>
[CFrameWnd::LoadFrame](../../mfc/reference/cframewnd-class.md#loadframe)<br/>
[CFrameWnd::OnCreateClient](../../mfc/reference/cframewnd-class.md#oncreateclient)<br/>
[CSplitterWnd:: Create](../../mfc/reference/csplitterwnd-class.md#create)<br/>
[CSplitterWnd:: CreateView](../../mfc/reference/csplitterwnd-class.md#createview)<br/>
[CWnd:: Create](../../mfc/reference/cwnd-class.md#create)

