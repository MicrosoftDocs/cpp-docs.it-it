---
title: Struttura CCreateContext | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: CCreateContext
dev_langs: C++
helpviewer_keywords: CCreateContext structure [MFC]
ms.assetid: 337a0e44-d910-49a8-afc0-c7207666a9dc
caps.latest.revision: "22"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 929ed0971f9b69bf8e98ae247957110e78ac33ba
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="ccreatecontext-structure"></a>Struttura CCreateContext
Il framework utilizza il `CCreateContext` struttura per la creazione di finestre cornice e viste associate a un documento.  
  
## <a name="syntax"></a>Sintassi  
  
```  
struct CCreateContext  
```  
  
## <a name="remarks"></a>Note  
 `CCreateContext`è una struttura e non dispone di una classe di base.  
  
 Quando si crea una finestra, i valori in questa struttura forniscono le informazioni utilizzate per connettere i componenti di un documento per la visualizzazione dei dati. È necessario utilizzare solo `CCreateContext` se si esegue l'override di parti del processo di creazione.  
  
 Oggetto `CCreateContext` struttura contiene i puntatori al documento, la finestra cornice, la visualizzazione e il modello di documento. Contiene inoltre un puntatore a un `CRuntimeClass` che identifica il tipo di visualizzazione da creare. Le informazioni sulla classe in fase di esecuzione e il puntatore del documento corrente vengono utilizzati per creare una nuova vista in modo dinamico. Nella tabella seguente è indicato come e quando ogni `CCreateContext` membro può essere utilizzato:  
  
|Member|Tipo|Novità di|  
|------------|----------|--------------------|  
|`m_pNewViewClass`|`CRuntimeClass*`|`CRuntimeClass`della nuova vista da creare.|  
|`m_pCurrentDoc`|`CDocument*`|Il documento esistente da associare alla nuova visualizzazione.|  
|`m_pNewDocTemplate`|`CDocTemplate*`|Il modello di documento associato alla creazione di una nuova finestra cornice MDI.|  
|`m_pLastView`|`CView*`|La visualizzazione originale in cui vengono modellate in altre visualizzazioni, come durante la creazione di visualizzazioni di finestra con separatore o la creazione di una seconda vista in un documento.|  
|`m_pCurrentFrame`|`CFrameWnd*`|La finestra cornice in cui vengono modellate finestre cornice aggiuntive, come la creazione di una seconda finestra cornice in un documento.|  
  
 Quando un modello di documento viene creato un documento e i relativi componenti, convalida le informazioni archiviate nel `CCreateContext` struttura. Ad esempio, non deve creare una vista per un documento esistente.  
  
> [!NOTE]
>  Tutti i puntatori in `CCreateContext` sono facoltativi e possono essere `NULL` se sconosciuto o non specificato.  
  
 `CCreateContext`viene utilizzato dalle funzioni membro elencate in "Vedere anche". Per informazioni specifiche, se si intende eseguirne l'override, vedere le descrizioni di queste funzioni.  
  
 Di seguito sono riportate alcune indicazioni generali:  
  
-   Quando viene passato come argomento per la creazione della finestra, come in `CWnd::Create`, `CFrameWnd::Create`, e `CFrameWnd::LoadFrame`, il contesto di creazione specifica ciò che la nuova finestra deve essere connessa alla. Per la maggior parte delle finestre, l'intera struttura è facoltativo e un `NULL` puntatore può essere passato.  
  
-   Per le funzioni membro sottoponibili a override, ad esempio `CFrameWnd::OnCreateClient`, `CCreateContext` argomento è facoltativo.  
  
-   Per le funzioni membro coinvolte nella visualizzazione creazione, è necessario fornire informazioni sufficienti per creare la vista. Per la prima visualizzazione in una finestra con separatore, ad esempio, è necessario fornire le informazioni sulla classe di visualizzazione e il documento corrente.  
  
 In generale, se si usano le impostazioni predefinite di framework, è possibile ignorare `CCreateContext`. Se si tenta di modifiche più avanzate, il codice di origine della libreria Microsoft Foundation Class o i programmi di esempio, ad esempio, viene guiderà l'utente. Se si dimentica di un parametro obbligatorio, un'asserzione di framework indicherà si è dimenticato.  
  
 Per ulteriori informazioni su `CCreateContext`, vedere l'esempio MFC [viene](../../visual-cpp-samples.md).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** AFXEXT. h  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CFrameWnd::Create](../../mfc/reference/cframewnd-class.md#create)   
 [CFrameWnd::LoadFrame](../../mfc/reference/cframewnd-class.md#loadframe)   
 [CFrameWnd::OnCreateClient](../../mfc/reference/cframewnd-class.md#oncreateclient)   
 [CSplitterWnd:: Create](../../mfc/reference/csplitterwnd-class.md#create)   
 [CSplitterWnd:: CreateView](../../mfc/reference/csplitterwnd-class.md#createview)   
 [CWnd:: Create](../../mfc/reference/cwnd-class.md#create)

