---
title: Classe u_menuorid
ms.date: 11/04/2016
f1_keywords:
- ATL._U_MENUorID
- ATL::_U_MENUorID
- _U_MENUorID
helpviewer_keywords:
- U_MENUorID class
- _U_MENUorID class
ms.assetid: cfc8032b-61b4-4a68-ba3a-92b82500ccae
ms.openlocfilehash: d02d00e3c56fc253e8f89eec9815e01d60c6e2aa
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62196984"
---
# <a name="umenuorid-class"></a>Classe u_menuorid

Questa classe fornisce wrapper `CreateWindow` e `CreateWindowEx`.

> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Runtime di Windows.

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
|[_U_MENUorID::m_hMenu](#_u_menuorid__m_hmenu)|Handle a un menu.|

## <a name="remarks"></a>Note

Classe dell'adattatore in questo argomento consente di eseguire gli ID (UINTs) o gli handle di menu (HMENUs) deve essere passato a una funzione senza un cast esplicito da parte del chiamante.

Questa classe è progettata per l'implementazione del wrapper per l'API di Windows, in particolare [CreateWindow](/windows/desktop/api/winuser/nf-winuser-createwindowa) e [CreateWindowEx](/windows/desktop/api/winuser/nf-winuser-createwindowexa) funzioni, entrambi accettare un argomento HMENU che può essere una finestra figlio identificatore (UINT) anziché un handle di menu. Ad esempio, è possibile visualizzare questa classe in uso come parametro per [CWindowImpl::Create](cwindowimpl-class.md#create).

La classe definisce due overload del costruttore: uno accetta un argomento UINT e l'altro accetta un argomento HMENU. L'argomento UINT è sufficiente eseguire il cast a un HMENU nel costruttore e il risultato archiviato nel membro dati della classe, [m_hMenu](#_u_menuorid__m_hmenu). L'argomento del costruttore HMENU verrà archiviato direttamente, senza conversione.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlwin. h

##  <a name="_u_menuorid__m_hmenu"></a>  _U_MENUorID::m_hMenu

La classe contiene il valore passato a uno dei relativi costruttori come membro dati pubblico HMENU.

```
HMENU m_hMenu;
```

##  <a name="_u_menuorid___u_menuorid"></a>  _U_MENUorID::_U_MENUorID

L'argomento UINT è sufficiente eseguire il cast a un HMENU nel costruttore e il risultato archiviato nel membro dati della classe, [m_hMenu](#_u_menuorid__m_hmenu).

```
_U_MENUorID(UINT nID);
_U_MENUorID(HMENU hMenu);
```

### <a name="parameters"></a>Parametri

*nID*<br/>
Un identificatore di finestra figlio.

*hMenu*<br/>
Handle menu.

### <a name="remarks"></a>Note

L'argomento del costruttore HMENU verrà archiviato direttamente, senza conversione.

## <a name="see-also"></a>Vedere anche

[Panoramica della classe](../../atl/atl-class-overview.md)
