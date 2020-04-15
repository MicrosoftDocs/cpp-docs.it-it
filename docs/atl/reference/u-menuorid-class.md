---
title: Classe _U_MENUorID
ms.date: 11/04/2016
f1_keywords:
- ATL._U_MENUorID
- ATL::_U_MENUorID
- _U_MENUorID
helpviewer_keywords:
- U_MENUorID class
- _U_MENUorID class
ms.assetid: cfc8032b-61b4-4a68-ba3a-92b82500ccae
ms.openlocfilehash: 419c9e79178db12efe278838ec8630e04ac3c461
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81325830"
---
# <a name="_u_menuorid-class"></a>Classe _U_MENUorID

Questa classe fornisce `CreateWindow` wrapper `CreateWindowEx`per e .

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.

## <a name="syntax"></a>Sintassi

```
class _U_MENUorID
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[_U_MENUorID::_U_MENUorID](#_u_menuorid___u_menuorid)|Costruttore.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[_U_MENUorID::m_hMenu](#_u_menuorid__m_hmenu)|Handle di un menu.|

## <a name="remarks"></a>Osservazioni

Questa classe di adattatori di argomento consente di passare gli ID (UIN) o gli handle di menu (HMENU) a una funzione senza richiedere un cast esplicito da parte del chiamante.

Questa classe è progettata per l'implementazione di wrapper per l'API di Windows, in particolare le funzioni [CreateWindow](/windows/win32/api/winuser/nf-winuser-createwindoww) e [CreateWindowEx,](/windows/win32/api/winuser/nf-winuser-createwindowexw) che accettano entrambi un argomento HMENU che può essere un identificatore di finestra figlio (UINT) anziché un handle di menu. Ad esempio, è possibile visualizzare questa classe in uso come parametro per [CWindowImpl::Create](cwindowimpl-class.md#create).

La classe definisce due overload del costruttore: uno accetta un argomento UINT e l'altro accetta un argomento HMENU. Il UINT argomento è sufficiente eseguire il cast a un HMENU nel costruttore e il risultato archiviato nel singolo membro dati della classe, [m_hMenu](#_u_menuorid__m_hmenu). L'argomento per il costruttore HMENU viene archiviato direttamente senza conversione.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlwin.h

## <a name="_u_menuoridm_hmenu"></a><a name="_u_menuorid__m_hmenu"></a>_U_MENUorID::m_hMenu

La classe contiene il valore passato a uno dei relativi costruttori come membro dati HMENU pubblico.

```
HMENU m_hMenu;
```

## <a name="_u_menuorid_u_menuorid"></a><a name="_u_menuorid___u_menuorid"></a>_U_MENUorID::_U_MENUorID

Il UINT argomento è sufficiente eseguire il cast a un HMENU nel costruttore e il risultato archiviato nel singolo membro dati della classe, [m_hMenu](#_u_menuorid__m_hmenu).

```
_U_MENUorID(UINT nID);
_U_MENUorID(HMENU hMenu);
```

### <a name="parameters"></a>Parametri

*nID*<br/>
Identificatore di finestra figlio.

*Hmenu*<br/>
Una maniglia di menu.

### <a name="remarks"></a>Osservazioni

L'argomento per il costruttore HMENU viene archiviato direttamente senza conversione.

## <a name="see-also"></a>Vedere anche

[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
