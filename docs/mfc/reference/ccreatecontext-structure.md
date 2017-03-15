---
title: Struttura CCreateContext | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CCreateContext
dev_langs:
- C++
helpviewer_keywords:
- CCreateContext structure
ms.assetid: 337a0e44-d910-49a8-afc0-c7207666a9dc
caps.latest.revision: 22
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: 040985df34f2613b4e4fae29498721aef15d50cb
ms.openlocfilehash: 231f2e44e085d27a2b2cbf289adf7b0521471b0e
ms.lasthandoff: 02/24/2017

---
# <a name="ccreatecontext-structure"></a>Struttura CCreateContext
Il framework utilizza il `CCreateContext` struttura per la creazione di finestre cornice e visualizzazioni associate a un documento.  
  
## <a name="syntax"></a>Sintassi  
  
```  
struct CCreateContext  
```  
  
## <a name="remarks"></a>Note  
 `CCreateContext`è una struttura e non dispone di una classe di base.  
  
 Quando si crea una finestra, i valori in questa struttura forniscono le informazioni utilizzate per connettere i componenti di un documento per la visualizzazione dei dati. È necessario utilizzare solo `CCreateContext` se si esegue l'override di parti del processo di creazione.  
  
 Oggetto `CCreateContext` struttura contiene i puntatori al documento, la finestra cornice, la visualizzazione e il modello di documento. Contiene inoltre un puntatore a un `CRuntimeClass` che identifica il tipo di visualizzazione da creare. Puntatore al documento corrente e le informazioni sulla classe in fase di esecuzione vengono utilizzati per creare una nuova vista in modo dinamico. Nella tabella seguente indica come e quando ogni `CCreateContext` membro può essere utilizzato:  
  
|Membro|Tipo|Novità per|  
|------------|----------|--------------------|  
|`m_pNewViewClass`|`CRuntimeClass*`|`CRuntimeClass`di come creare la nuova visualizzazione.|  
|`m_pCurrentDoc`|`CDocument*`|Nel documento esistente da associare alla nuova visualizzazione.|  
|`m_pNewDocTemplate`|`CDocTemplate*`|Il modello di documento associato alla creazione di una nuova finestra cornice MDI.|  
|`m_pLastView`|`CView*`|La visualizzazione originale in cui vengono modellate sulle visualizzazioni aggiuntive, come durante la creazione di visualizzazioni della finestra con separatore o la creazione di una seconda vista su un documento.|  
|`m_pCurrentFrame`|`CFrameWnd*`|La finestra cornice in cui vengono modellate finestre cornice aggiuntive, come la creazione di una seconda finestra cornice in un documento.|  
  
 Quando un modello di documento viene creato un documento e i relativi componenti, convalida le informazioni archiviate nel `CCreateContext` struttura. Ad esempio, non deve creare una vista di un documento esistente.  
  
> [!NOTE]
>  Tutti i puntatori in `CCreateContext` sono facoltativi e possono essere `NULL` se sconosciuto o non specificato.  
  
 `CCreateContext`viene utilizzato dalle funzioni membro dicitura "Vedere anche". Se si intende eseguirne l'override, consultare le descrizioni di queste funzioni per informazioni specifiche.  
  
 Di seguito sono riportate alcune indicazioni generali:  
  
-   Quando viene passato come argomento per la creazione della finestra, come in `CWnd::Create`, `CFrameWnd::Create`, e `CFrameWnd::LoadFrame`, il contesto di creazione specifica ciò che la nuova finestra deve essere connesse a. Per la maggior parte delle finestre, l'intera struttura è facoltativo e un `NULL` puntatore può essere passato.  
  
-   Per le funzioni membro sottoponibili a override, ad esempio `CFrameWnd::OnCreateClient`, `CCreateContext` argomento è facoltativo.  
  
-   Per le funzioni membro coinvolte nella visualizzazione creazione, è necessario fornire informazioni sufficienti per creare una vista. Per la prima vista in una finestra con separatore, ad esempio, è necessario fornire le informazioni sulla classe di visualizzazione e il documento corrente.  
  
 In generale, se si utilizzano le impostazioni predefinite di framework, è possibile ignorare `CCreateContext`. Se si tenta di modifiche più avanzate, il codice sorgente libreria Microsoft Foundation Class o i programmi di esempio, ad esempio, viene guiderà l'utente. Se si dimentica un parametro obbligatorio, un'asserzione framework indicherà si è dimenticato.  
  
 Per ulteriori informazioni su `CCreateContext`, vedere l'esempio MFC [viene](../../visual-cpp-samples.md).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** AFXEXT  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CFrameWnd::Create](../../mfc/reference/cframewnd-class.md#create)   
 [CFrameWnd::LoadFrame](../../mfc/reference/cframewnd-class.md#loadframe)   
 [CFrameWnd::OnCreateClient](../../mfc/reference/cframewnd-class.md#oncreateclient)   
 [CSplitterWnd:: Create](../../mfc/reference/csplitterwnd-class.md#create)   
 [CSplitterWnd:: CreateView](../../mfc/reference/csplitterwnd-class.md#createview)   
 [CWnd:: Create](../../mfc/reference/cwnd-class.md#create)


