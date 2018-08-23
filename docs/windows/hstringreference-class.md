---
title: Classe HStringReference | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::HStringReference
dev_langs:
- C++
ms.assetid: 9bf823b1-17eb-4ac4-8c5d-27d27c7a4150
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: de3c7fe60432acfc3096ea19fc00cf371a7c4e92
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42610506"
---
# <a name="hstringreference-class"></a>Classe HStringReference

Rappresenta un HSTRING creato da una stringa esistente.

## <a name="syntax"></a>Sintassi

```cpp
class HStringReference;
```

## <a name="remarks"></a>Note

La durata del buffer nel nuovo HSTRING non è gestita dal Runtime di Windows. Il chiamante assegna una stringa di origine nello stack frame per evitare un'allocazione heap e per eliminare il rischio di perdita di memoria. Inoltre, il chiamante deve garantire che la stringa di origine rimanga invariata durante il ciclo di vita di HSTRING associato. Per altre informazioni, vedere [WindowsCreateStringReference funzione](http://msdn.microsoft.com/0361bb7e-da49-4289-a93e-de7aab8712ac).

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Costruttore HStringReference::HStringReference](../windows/hstringreference-hstringreference-constructor.md)|Inizializza una nuova istanza di **HStringReference** classe.|

### <a name="members"></a>Membri

|Membro|Descrizione|
|------------|-----------------|
|[Metodo HStringReference::CopyTo](../windows/hstringreference-copyto-method.md)|Copia l'oggetto corrente **HStringReference** oggetto in un oggetto HSTRING.|
|[Metodo HStringReference::Get](../windows/hstringreference-get-method.md)|Recupera il valore di handle sottostante di HSTRING.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Operatore HStringReference::Operator=](../windows/hstringreference-operator-assign-operator.md)|Sposta il valore di un'altra **HStringReference** oggetto all'oggetto corrente **HStringReference** oggetto.|
|[Operatore HStringReference::Operator==](../windows/hstringreference-operator-equality-operator.md)|Indica se i due parametri sono uguali.|
|[Operatore HStringReference::Operator!=](../windows/hstringreference-operator-inequality-operator.md)|Indica se i due parametri non sono uguali.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`HStringReference`

## <a name="requirements"></a>Requisiti

**Intestazione:** corewrappers. h

**Namespace:** Microsoft::WRL::Wrappers

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Microsoft::WRL::Wrappers](../windows/microsoft-wrl-wrappers-namespace.md)