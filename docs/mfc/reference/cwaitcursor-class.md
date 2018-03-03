---
title: Classe CWaitCursor | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CWaitCursor
- AFXWIN/CWaitCursor
- AFXWIN/CWaitCursor::CWaitCursor
- AFXWIN/CWaitCursor::Restore
dev_langs:
- C++
helpviewer_keywords:
- CWaitCursor [MFC], CWaitCursor
- CWaitCursor [MFC], Restore
ms.assetid: 5dfae2ff-d7b6-4383-b0ad-91e0868c67b3
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 1cf5c850158e445e7695b85e540b1e0c162e621c
ms.sourcegitcommit: 54035dce0992ba5dce0323d67f86301f994ff3db
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/03/2018
---
# <a name="cwaitcursor-class"></a>Classe CWaitCursor
Fornisce un modo per mostrare in una riga un cursore di attesa, in genere visualizzato come una clessidra, mentre si sta eseguendo un'operazione di lunga durata.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CWaitCursor  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CWaitCursor::CWaitCursor](#cwaitcursor)|Costruisce un `CWaitCursor` dell'oggetto e viene visualizzato il cursore di attesa.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CWaitCursor::Restore](#restore)|Ripristina il cursore di attesa dopo che è stato modificato.|  
  
## <a name="remarks"></a>Note  
 `CWaitCursor`non dispone di una classe di base.  
  
 Windows buone pratiche di programmazione richiedono che un cursore di attesa visualizzare ogni volta che si sta eseguendo un'operazione che richiede una notevole quantità di tempo.  
  
 Per visualizzare un cursore di attesa, può definire un `CWaitCursor` variabile prima del codice che esegue l'operazione di lunga durata. Il costruttore dell'oggetto determina automaticamente il cursore di attesa da visualizzare.  
  
 Quando l'oggetto esce dall'ambito (alla fine del blocco in cui il `CWaitCursor` a un oggetto dichiarato), il relativo distruttore imposta il cursore fino al cursore precedente. In altre parole, l'oggetto esegue automaticamente la pulizia necessaria.  
  
> [!NOTE]
>  A causa di costruttori e distruttori di loro funzionano, `CWaitCursor` gli oggetti vengono sempre dichiarati come variabili locali, ovvero mai vengono dichiarate come variabili globali né vengono allocate con **nuova**.  
  
 Se si esegue un'operazione che potrebbe causare il cursore da modificare, ad esempio la visualizzazione di una finestra di messaggio o la finestra di dialogo, chiamare il [ripristinare](#restore) funzione membro per ripristinare il cursore di attesa. È possibile chiamare **ripristinare** anche quando un cursore di attesa è attualmente visualizzato.  
  
 È possibile visualizzare un cursore di attesa per utilizzare la combinazione di [CCmdTarget::BeginWaitCursor](../../mfc/reference/ccmdtarget-class.md#beginwaitcursor), [CCmdTarget::EndWaitCursor](../../mfc/reference/ccmdtarget-class.md#endwaitcursor)ed eventualmente [CCmdTarget::RestoreWaitCursor](../../mfc/reference/ccmdtarget-class.md#restorewaitcursor). Tuttavia, `CWaitCursor` è più facile da utilizzare in quanto non è necessario impostare il cursore fino al cursore precedente al termine dell'operazione di lunga durata.  
  
> [!NOTE]
>  MFC imposta e ripristina il cursore utilizzando il [CWinApp::DoWaitCursor](../../mfc/reference/cwinapp-class.md#dowaitcursor) funzione virtuale. È possibile eseguire l'override di questa funzione per ottenere un comportamento personalizzato.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `CWaitCursor`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxwin.h  
  
## <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCWindowing#62](../../mfc/reference/codesnippet/cpp/cwaitcursor-class_1.cpp)]  
  
##  <a name="cwaitcursor"></a>CWaitCursor::CWaitCursor  
 Per visualizzare un cursore di attesa, è sufficiente dichiarare un `CWaitCursor` oggetto prima che il codice che esegue l'operazione di lunga durata.  
  
```  
CWaitCursor();
```  
  
### <a name="remarks"></a>Note  
 Il costruttore determina automaticamente il cursore di attesa da visualizzare.  
  
 Quando l'oggetto esce dall'ambito (alla fine del blocco in cui il `CWaitCursor` a un oggetto dichiarato), il relativo distruttore imposta il cursore fino al cursore precedente. In altre parole, l'oggetto esegue automaticamente la pulizia necessaria.  
  
 È possibile sfruttare il fatto che il distruttore viene chiamato alla fine del blocco, che potrebbe essere prima della fine della funzione, per rendere il cursore di attesa attiva solo in una parte della funzione. Questa tecnica è illustrata nel secondo esempio riportato di seguito.  
  
> [!NOTE]
>  A causa di costruttori e distruttori di loro funzionano, `CWaitCursor` gli oggetti vengono sempre dichiarati come variabili locali, ovvero mai vengono dichiarate come variabili globali, né vengono allocate con **nuova**.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCWindowing#63](../../mfc/reference/codesnippet/cpp/cwaitcursor-class_2.cpp)]  
  
##  <a name="restore"></a>CWaitCursor::Restore  
 Per ripristinare il cursore di attesa, chiamare questa funzione dopo l'esecuzione di un'operazione, ad esempio la visualizzazione di una finestra di messaggio o nella finestra di dialogo potrebbe cambiare il cursore di attesa per un altro cursore.  
  
```  
void Restore();
```  
  
### <a name="remarks"></a>Note  
 È possibile chiamare **ripristinare** anche quando il cursore di attesa è attualmente visualizzato.  
  
 Se è necessario ripristinare il cursore di attesa in una funzione diversa da quella in cui il `CWaitCursor` a un oggetto dichiarato, è possibile chiamare [CCmdTarget::RestoreWaitCursor](../../mfc/reference/ccmdtarget-class.md#restorewaitcursor).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCWindowing#64](../../mfc/reference/codesnippet/cpp/cwaitcursor-class_3.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CCmdTarget::BeginWaitCursor](../../mfc/reference/ccmdtarget-class.md#beginwaitcursor)   
 [CCmdTarget::EndWaitCursor](../../mfc/reference/ccmdtarget-class.md#endwaitcursor)   
 [CCmdTarget::RestoreWaitCursor](../../mfc/reference/ccmdtarget-class.md#restorewaitcursor)   
 [CWinApp::DoWaitCursor](../../mfc/reference/cwinapp-class.md#dowaitcursor)   
 [Come ricerca per categorie: modifica il cursore del Mouse in un'applicazione di classi Microsoft Foundation](http://go.microsoft.com/fwlink/p/?linkid=128044)



