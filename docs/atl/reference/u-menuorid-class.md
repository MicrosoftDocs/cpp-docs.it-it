---
description: 'Altre informazioni su: _U_MENUorID Class'
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
ms.openlocfilehash: 4418e9db455e72643c497925c19900b41c9b9f38
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97138788"
---
# <a name="_u_menuorid-class"></a>Classe _U_MENUorID

Questa classe fornisce wrapper per `CreateWindow` e `CreateWindowEx` .

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Windows Runtime.

## <a name="syntax"></a>Sintassi

```
class _U_MENUorID
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[_U_MENUorID:: _U_MENUorID](#_u_menuorid___u_menuorid)|Costruttore.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Description|
|----------|-----------------|
|[_U_MENUorID:: m_hMenu](#_u_menuorid__m_hmenu)|Handle per un menu.|

## <a name="remarks"></a>Commenti

Questa classe di adattatori di argomenti consente di passare gli ID (UINT) o gli handle di menu (HMENUs) a una funzione senza richiedere un cast esplicito nella parte del chiamante.

Questa classe è progettata per l'implementazione di wrapper per l'API Windows, in particolare per le funzioni [CreateWindow](/windows/win32/api/winuser/nf-winuser-createwindoww) e [CreateWindowEx](/windows/win32/api/winuser/nf-winuser-createwindowexw) , che accettano entrambe un argomento HMENU che può essere un identificatore di finestra figlio (uint) anziché un handle di menu. Ad esempio, è possibile vedere questa classe in uso come parametro per [CWindowImpl:: create](cwindowimpl-class.md#create).

La classe definisce due overload del costruttore: uno accetta un argomento UINT e l'altro accetta un argomento HMENU. È sufficiente eseguire il cast dell'argomento UINT a un HMENU nel costruttore e il risultato archiviato nel singolo membro dati della classe [m_hMenu](#_u_menuorid__m_hmenu). L'argomento del costruttore HMENU viene archiviato direttamente senza conversione.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlwin. h

## <a name="_u_menuoridm_hmenu"></a><a name="_u_menuorid__m_hmenu"></a> _U_MENUorID:: m_hMenu

La classe include il valore passato a uno dei relativi costruttori come membro dati HMENU pubblico.

```
HMENU m_hMenu;
```

## <a name="_u_menuorid_u_menuorid"></a><a name="_u_menuorid___u_menuorid"></a> _U_MENUorID:: _U_MENUorID

È sufficiente eseguire il cast dell'argomento UINT a un HMENU nel costruttore e il risultato archiviato nel singolo membro dati della classe [m_hMenu](#_u_menuorid__m_hmenu).

```
_U_MENUorID(UINT nID);
_U_MENUorID(HMENU hMenu);
```

### <a name="parameters"></a>Parametri

*nID*<br/>
Identificatore della finestra figlio.

*hMenu*<br/>
Un handle di menu.

### <a name="remarks"></a>Commenti

L'argomento del costruttore HMENU viene archiviato direttamente senza conversione.

## <a name="see-also"></a>Vedi anche

[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
