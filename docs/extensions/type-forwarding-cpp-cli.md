---
title: Inoltro del tipo (C++/CLI)
ms.date: 10/12/2018
ms.topic: reference
helpviewer_keywords:
- type forwarding, C++
ms.assetid: ae730b69-0c27-41cc-84e1-3132783866ea
ms.openlocfilehash: c5148c05e5580942d885b310e35f3b629224a654
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "65515976"
---
# <a name="type-forwarding-ccli"></a>Inoltro del tipo (C++/CLI)

L'*inoltro del tipo* consente di spostare un tipo da un assembly (assembly A) a un altro assembly (assembly B) in modo che non sia necessario ricompilare i client che fanno uso dell'assembly A.

## <a name="windows-runtime"></a>Windows Runtime

Questa funzionalità non è supportata in Windows Runtime.

## <a name="common-language-runtime"></a>Common Language Runtime

L'esempio di codice seguente illustra come usare l'inoltro del tipo.

### <a name="syntax"></a>Sintassi

```cpp
#using "new.dll"
[assembly:TypeForwardedTo(type::typeid)];
```

### <a name="parameters"></a>Parametri

*new*<br/>
Assembly in cui si sta spostando la definizione del tipo.

*type*<br/>
Tipo la cui definizione si sta spostando in un altro assembly.

### <a name="remarks"></a>Osservazioni

Dopo che un componente (assembly) viene fornito e usato dalle applicazioni client, è possibile usare l'inoltro del tipo per spostare un tipo dal componente (assembly) in un altro assembly e fornire il componente aggiornato (e qualsiasi assembly aggiuntivo richiesto) e le applicazioni client continueranno a funzionare senza necessità di ricompilazione.

L'inoltro del tipo funziona solo per i componenti a cui fanno riferimento applicazioni esistenti. Quando si ricompila un'applicazione, devono esserci i riferimenti agli assembly appropriati per tutti i tipi usati nell'applicazione.

Quando si inoltra un tipo (tipo A) da un assembly, è necessario aggiungere l'attributo `TypeForwardedTo` per tale tipo, nonché un riferimento a un assembly. L'assembly cui si fa riferimento deve contenere uno degli elementi seguenti:

- La definizione per il tipo A.

- Un attributo `TypeForwardedTo` per il tipo A, nonché un riferimento a un assembly.

Ecco alcuni tipi che è possibile inoltrare:

- classi di riferimento

- classi di valore

- enum

- interfacce

Non è possibile inoltrare i tipi seguenti:

- Tipi generici

- Tipi nativi

- Tipi annidati (se si vuole inoltrare un tipo annidato, è necessario inoltrare il tipo che lo contiene)

È possibile inoltrare un tipo a un assembly creato in qualsiasi linguaggio destinato a Common Language Runtime.

Se quindi un file di codice sorgente usato per creare l'assembly A.dll contiene una definizione di tipo (`ref class MyClass`) e si vuole spostare tale definizione di tipo nell'assembly B.dll, è necessario:

1. Spostare la definizione del tipo `MyClass` in un file di codice sorgente usato per compilare B.dll.

2. Compilare l'assembly B.dll.

3. Eliminare la definizione del tipo `MyClass` dal codice sorgente usato per compilare A.dll e sostituirla con quanto segue:

    ```cpp
    #using "B.dll"
    [assembly:TypeForwardedTo(MyClass::typeid)];
    ```

4. Compilare l'assembly A.dll.

5. Usare A.dll senza ricompilare le applicazioni client.

### <a name="requirements"></a>Requisiti

Opzione del compilatore: `/clr`