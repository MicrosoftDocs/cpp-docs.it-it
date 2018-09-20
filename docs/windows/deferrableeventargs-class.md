---
title: Classe DeferrableEventArgs | Microsoft Docs
ms.custom: ''
ms.date: 09/12/2018
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- event/Microsoft::WRL::DeferrableEventArgs
- event/Microsoft::WRL::DeferrableEventArgs::GetDeferral
- event/Microsoft::WRL::DeferrableEventArgs::InvokeAllFinished
dev_langs:
- C++
helpviewer_keywords:
- Microsoft::WRL::DeferrableEventArgs class
- Microsoft::WRL::DeferrableEventArgs::GetDeferral method
- Microsoft::WRL::DeferrableEventArgs::InvokeAllFinished method
ms.assetid: ece89267-7b72-40e1-8185-550c865b070a
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 082cae10bbd01c4c46fcfaa84bfd94ba6178bc1a
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46401784"
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

*TEventArgsInterface*<br/>
Tipo di interfaccia che dichiara gli argomenti per un evento posticipato.

*TEventArgsClass*<br/>
La classe che implementa *TEventArgsInterface*.

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

Nome                                                         | Descrizione
------------------------------------------------------------ | -----------------------------------------------------------------------------------------------------------------------------
[Deferrableeventargs:: Getdeferral](#getdeferral)             | Ottiene un riferimento per la [differimento](http://go.microsoft.com/fwlink/p/?linkid=526520) oggetto che rappresenta un evento posticipato.
[Deferrableeventargs:: Invokeallfinished](#invokeallfinished) | Chiamato per indicare il completamento dell'elaborazione per la gestione di un evento posticipato.

## <a name="remarks"></a>Note

Istanze di questa classe vengono passate ai gestori eventi per eventi posticipati. I parametri del modello rappresentano un'interfaccia che definisce i dettagli degli argomenti dell'evento per un tipo specifico di evento posticipato e una classe che implementa tale interfaccia.

La classe viene visualizzata come primo argomento a un gestore eventi per un evento posticipato. È possibile chiamare il [GetDeferral](#getdeferral) metodo per ottenere il [differimento](http://go.microsoft.com/fwlink/p/?linkid=526520) oggetto da cui è possibile ottenere tutte le informazioni sull'evento posticipato. Dopo aver completato la gestione degli eventi, è necessario chiamare Complete sull'oggetto Deferral. È quindi necessario chiamare [InvokeAllFinished](#invokeallfinished) alla fine del metodo del gestore eventi, che assicura che il completamento di tutti gli eventi posticipati sia comunicato correttamente.

## <a name="requirements"></a>Requisiti

**Intestazione:** Event. h

**Spazio dei nomi:** Microsoft::WRL

## <a name="getdeferral"></a>Deferrableeventargs:: Getdeferral

Ottiene un riferimento per la [differimento](http://go.microsoft.com/fwlink/p/?linkid=526520) oggetto che rappresenta un evento posticipato.

```cpp
HRESULT GetDeferral([out, retval] Windows::Foundation::IDeferral** result)  
```

### <a name="parameters"></a>Parametri

*Risultato*<br/>
Un puntatore che farà riferimento il [differimento](http://go.microsoft.com/fwlink/p/?linkid=526520) al completamento della chiamata dell'oggetto.

### <a name="return-value"></a>Valore restituito

S_OK se riesce; in caso contrario, HRESULT indica un errore.

## <a name="invokeallfinished"></a>Deferrableeventargs:: Invokeallfinished

Chiamato per indicare il completamento dell'elaborazione per la gestione di un evento posticipato.
  
```cpp
void InvokeAllFinished()  
```
  
### <a name="remarks"></a>Note

È necessario chiamare questo metodo dopo l'origine evento chiami [InvokeAll](../windows/eventsource-invokeall-method.md). Se si chiama questo metodo, si eviteranno ulteriori rinvii e si forzerà l'esecuzione del gestore di completamento se non sono stati eseguiti rinvii.
