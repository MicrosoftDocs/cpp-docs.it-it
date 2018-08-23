---
title: Classe DeferrableEventArgs | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
dev_langs:
- C++
ms.assetid: ece89267-7b72-40e1-8185-550c865b070a
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 8a53e33d55ccfac7eff763e53240295ea9b7b2a1
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42600971"
---
# <a name="deferrableeventargs-class"></a>Classe DeferrableEventArgs

Classe di modello usata per i tipi di argomento evento per rinvii.

## <a name="syntax"></a>Sintassi

```cpp
template <
typename TEventArgsInterface,
typename TEventArgsClass
>
class DeferrableEventArgs : public TEventArgsInterface
```

### <a name="parameters"></a>Parametri

*TEventArgsInterface*  
Tipo di interfaccia che dichiara gli argomenti per un evento posticipato.

*TEventArgsClass*  
La classe che implementa *TEventArgsInterface*.

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Metodo DeferrableEventArgs::GetDeferral](../windows/deferrableeventargs-getdeferral-method.md)|Ottiene un riferimento per la [differimento](http://go.microsoft.com/fwlink/p/?linkid=526520) oggetto che rappresenta un evento posticipato.|
|[Metodo DeferrableEventArgs::InvokeAllFinished](../windows/deferrableeventargs-invokeallfinished-method.md)|Chiamato per indicare il completamento dell'elaborazione per la gestione di un evento posticipato.|

## <a name="remarks"></a>Note

Istanze di questa classe vengono passate ai gestori eventi per eventi posticipati. I parametri del modello rappresentano un'interfaccia che definisce i dettagli degli argomenti dell'evento per un tipo specifico di evento posticipato e una classe che implementa tale interfaccia.

La classe viene visualizzata come primo argomento a un gestore eventi per un evento posticipato. È possibile chiamare il [GetDeferral](../windows/deferrableeventargs-getdeferral-method.md) metodo per ottenere il [differimento](http://go.microsoft.com/fwlink/p/?linkid=526520) oggetto da cui è possibile ottenere tutte le informazioni sull'evento posticipato. Dopo aver completato la gestione degli eventi, è necessario chiamare Complete sull'oggetto Deferral. È quindi necessario chiamare [InvokeAllFinished](../windows/deferrableeventargs-invokeallfinished-method.md) alla fine del metodo del gestore eventi, che assicura che il completamento di tutti gli eventi posticipati sia comunicato correttamente.

## <a name="requirements"></a>Requisiti

**Intestazione:** Event. h

**Spazio dei nomi:** Microsoft::WRL

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Microsoft::WRL](../windows/microsoft-wrl-namespace.md)