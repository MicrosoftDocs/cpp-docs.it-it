---
description: 'Altre informazioni su: inizializzazione OLE'
title: Inizializzazione OLE
ms.date: 11/04/2016
f1_keywords:
- afxdisp/AfxOleInit
- afxdisp/AfxEnableControlContainer
helpviewer_keywords:
- OLE initialization
ms.assetid: aa8a54a7-24c3-4344-b2c6-dbcf6084fa31
ms.openlocfilehash: 0efed4fefe62b720852905b6eed44501d4369efa
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97218992"
---
# <a name="ole-initialization"></a>Inizializzazione OLE

Prima che un'applicazione possa utilizzare i servizi di sistema OLE, è necessario inizializzare le DLL di sistema OLE e verificare che la versione delle dll sia corretta. La `AfxOleInit` funzione Inizializza le DLL di sistema OLE.

### <a name="ole-initialization"></a>Inizializzazione OLE

|Nome|Description|
|-|-|
|[AfxOleInit](#afxoleinit)|Inizializza le librerie OLE.|
|[AfxEnableControlContainer](#afxenablecontrolcontainer)|Chiamare questa funzione nella funzione dell'oggetto applicazione `InitInstance` per abilitare il supporto per l'indipendenza dei controlli OLE.|

## <a name="afxenablecontrolcontainer"></a><a name="afxenablecontrolcontainer"></a> AfxEnableControlContainer

Chiamare questa funzione nella funzione dell'oggetto applicazione `InitInstance` per abilitare il supporto per l'indipendenza dei controlli OLE.

### <a name="syntax"></a>Sintassi

```cpp
void AfxEnableControlContainer( );
```

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni sui controlli OLE (ora denominati controlli ActiveX), vedere gli [argomenti del controllo ActiveX](../mfc-activex-controls.md).

### <a name="requirements"></a>Requisiti

**Intestazione:** afxdisp.h

## <a name="afxoleinit"></a><a name="afxoleinit"></a> AfxOleInit

Inizializza il supporto OLE per l'applicazione.

```
BOOL AFXAPI AfxOleInit();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; 0 se l'inizializzazione ha esito negativo, probabilmente perché sono installate versioni non corrette delle DLL di sistema OLE.

### <a name="remarks"></a>Commenti

Chiamare questa funzione per inizializzare il supporto OLE per un'applicazione MFC. Quando viene chiamata questa funzione, si verificano le azioni seguenti:

- Inizializza la libreria COM nell'Apartment corrente dell'applicazione chiamante. Per ulteriori informazioni, vedere [OleInitialize](/windows/win32/api/ole2/nf-ole2-oleinitialize).

- Crea un oggetto filtro messaggi, implementando l'interfaccia [IMessageFilter](/windows/win32/api/objidl/nn-objidl-imessagefilter) . È possibile accedere a questo filtro messaggi con una chiamata a [AfxOleGetMessageFilter](application-control.md#afxolegetmessagefilter).

> [!NOTE]
> Se **AfxOleInit** viene chiamato da una DLL MFC, la chiamata avrà esito negativo. L'errore si verifica perché la funzione presuppone che, se viene chiamata da una DLL, il sistema OLE è stato precedentemente inizializzato dall'applicazione chiamante.

> [!NOTE]
> Le applicazioni MFC devono essere inizializzate come Apartment a thread singolo (STA). Se si chiama [CoInitializeEx](/windows/win32/api/combaseapi/nf-combaseapi-coinitializeex) nell' `InitInstance` override, specificare COINIT_APARTMENTTHREADED (anziché COINIT_MULTITHREADED).

### <a name="requirements"></a>Requisiti

**Intestazione:** afxdisp.h

## <a name="see-also"></a>Vedi anche

[Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)
