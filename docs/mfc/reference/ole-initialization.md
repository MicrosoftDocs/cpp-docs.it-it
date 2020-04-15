---
title: Inizializzazione OLE
ms.date: 11/04/2016
f1_keywords:
- afxdisp/AfxOleInit
- afxdisp/AfxEnableControlContainer
helpviewer_keywords:
- OLE initialization
ms.assetid: aa8a54a7-24c3-4344-b2c6-dbcf6084fa31
ms.openlocfilehash: 39a6f28bfe38f254f15f441ed6305daa2cb5793e
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81373039"
---
# <a name="ole-initialization"></a>Inizializzazione OLE

Prima che un'applicazione possa utilizzare i servizi di sistema OLE, è necessario inizializzare le DLL di sistema OLE e verificare che le DLL siano la versione corretta. La `AfxOleInit` funzione inizializza le DLL di sistema OLE.

### <a name="ole-initialization"></a>Inizializzazione OLE

|||
|-|-|
|[AfxOleInit](#afxoleinit)|Inizializza le librerie OLE.|
|[AfxEnableControlContainer](#afxenablecontrolcontainer)|Chiamare questa funzione nella funzione `InitInstance` dell'oggetto applicazione per abilitare il supporto per il contenimento dei controlli OLE.|

## <a name="afxenablecontrolcontainer"></a><a name="afxenablecontrolcontainer"></a>AfxEnableControlContainer

Chiamare questa funzione nella funzione `InitInstance` dell'oggetto applicazione per abilitare il supporto per il contenimento dei controlli OLE.

### <a name="syntax"></a>Sintassi

```
void AfxEnableControlContainer( );
```

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni sui controlli OLE (ora denominati controlli ActiveX), vedere Argomenti relativi [ai controlli ActiveX](../mfc-activex-controls.md).

### <a name="requirements"></a>Requisiti

**Intestazione:** afxdisp.h

## <a name="afxoleinit"></a><a name="afxoleinit"></a>AfxOleInit

Inizializza il supporto OLE per l'applicazione.

```
BOOL AFXAPI AfxOleInit();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero in caso di esito positivo; 0 se l'inizializzazione non riesce, probabilmente perché sono installate versioni non corrette delle DLL di sistema OLE.

### <a name="remarks"></a>Osservazioni

Chiamare questa funzione per inizializzare il supporto OLE per un'applicazione MFC. Quando questa funzione viene chiamata, si verificano le seguenti azioni:

- Inizializza la libreria COM nell'apartment corrente dell'applicazione chiamante. Per ulteriori informazioni, vedere [OleInitialize](/windows/win32/api/ole2/nf-ole2-oleinitialize).

- Crea un oggetto filtro messaggi, implementando l'interfaccia [IMessageFilter.](/windows/win32/api/objidl/nn-objidl-imessagefilter) È possibile accedere a questo filtro messaggi con una chiamata a [AfxOleGetMessageFilter](application-control.md#afxolegetmessagefilter).

> [!NOTE]
> Se **AfxOleInit** viene chiamato da una DLL MFC, la chiamata avrà esito negativo. L'errore si verifica perché la funzione presuppone che, se viene chiamata da una DLL, il sistema OLE è stato precedentemente inizializzato dall'applicazione chiamante.

> [!NOTE]
> Le applicazioni MFC devono essere inizializzate come apartment a thread singolo (STA). Se si chiama [CoInitializeEx](/windows/win32/api/combaseapi/nf-combaseapi-coinitializeex) nell'override, `InitInstance` specificare COINIT_APARTMENTTHREADED (anziché COINIT_MULTITHREADED).

### <a name="requirements"></a>Requisiti

**Intestazione:** afxdisp.h

## <a name="see-also"></a>Vedere anche

[Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)
