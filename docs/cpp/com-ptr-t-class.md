---
title: Classe _com_ptr_t
ms.date: 11/04/2016
f1_keywords:
- _com_ptr_t
helpviewer_keywords:
- _com_ptr_t class
ms.assetid: 3753a8a0-03d4-4cfd-8a9a-74872ea53971
ms.openlocfilehash: eeaab22ded537cbbb211a79596b8383251af3ab7
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80189904"
---
# <a name="_com_ptr_t-class"></a>Classe _com_ptr_t

**Sezione specifica Microsoft**

Un oggetto **_com_ptr_t** incapsula un puntatore a interfaccia com e viene definito puntatore "intelligente". Questa classe modello gestisce l'allocazione e la deallocazione delle risorse tramite chiamate di funzione alle funzioni membro `IUnknown`: `QueryInterface`, `AddRef`e `Release`.

Una definizione typedef fornita dalla macro _COM_SMARTPTR_TYPEDEF di solito fa riferimento a un puntatore intelligente. Questa macro accetta un nome di interfaccia e l'IID e dichiara una specializzazione di **_com_ptr_t** con il nome dell'interfaccia più un suffisso di `Ptr`. Ad esempio:

```cpp
_COM_SMARTPTR_TYPEDEF(IMyInterface, __uuidof(IMyInterface));
```

dichiara la `IMyInterfacePtr`di specializzazione del **_com_ptr_t** .

Un set di [modelli di funzione](../cpp/relational-function-templates.md), non membri di questa classe modello, supporta i confronti con un puntatore intelligente sul lato destro dell'operatore di confronto.

### <a name="construction"></a>Costruzioni

|||
|-|-|
|[_com_ptr_t](../cpp/com-ptr-t-com-ptr-t.md)|Costruisce un oggetto **_com_ptr_t** .|

### <a name="low-level-operations"></a>Operazioni di basso livello

|||
|-|-|
|[AddRef](../cpp/com-ptr-t-addref.md)|Chiama la funzione membro `AddRef` di `IUnknown` sul puntatore a interfaccia incapsulato.|
|[Collega](../cpp/com-ptr-t-attach.md)|Incapsula un puntatore a interfaccia raw di questo tipo di puntatore intelligente.|
|[CreateInstance](../cpp/com-ptr-t-createinstance.md)|Crea una nuova istanza di un oggetto in base a un `CLSID` o `ProgID`.|
|[Scollega](../cpp/com-ptr-t-detach.md)|Estrae e restituisce un puntatore a interfaccia incapsulato.|
|[GetActiveObject](../cpp/com-ptr-t-getactiveobject.md)|Si connette a un'istanza esistente di un oggetto dato un `CLSID` o `ProgID`.|
|[GetInterfacePtr](../cpp/com-ptr-t-getinterfaceptr.md)|Restituisce un puntatore a interfaccia incapsulato.|
|[QueryInterface](../cpp/com-ptr-t-queryinterface.md)|Chiama la funzione membro `QueryInterface` di `IUnknown` sul puntatore a interfaccia incapsulato.|
|[Versione](../cpp/com-ptr-t-release.md)|Chiama la funzione membro `Release` di `IUnknown` sul puntatore a interfaccia incapsulato.|

### <a name="operators"></a>Operatori

|||
|-|-|
|[operatore =](../cpp/com-ptr-t-operator-equal.md)|Assegna un nuovo valore a un oggetto **_com_ptr_t** esistente.|
|[Operators = =,! =, \<, >, \<=, > =](../cpp/com-ptr-t-relational-operators.md)|Confrontare l'oggetto del puntatore intelligente con un altro puntatore intelligente, puntatore a interfaccia raw o NULL.|
|[Estrattori](../cpp/com-ptr-t-extractors.md)|Estrae il puntatore a interfaccia COM incapsulato.|

**Fine sezione specifica Microsoft**

## <a name="requirements"></a>Requisiti

**Intestazione:** \<comip. h >

**Lib:** comsuppw. lib o comsuppwd. lib (vedere [/Zc: wchar_t (wchar_t è di tipo nativo)](../build/reference/zc-wchar-t-wchar-t-is-native-type.md) per ulteriori informazioni.

## <a name="see-also"></a>Vedere anche

[Classi di supporto COM del compilatore](../cpp/compiler-com-support-classes.md)
