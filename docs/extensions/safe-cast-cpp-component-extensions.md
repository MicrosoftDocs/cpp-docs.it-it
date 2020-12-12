---
description: 'Altre informazioni su: safe_cast (C++/CLI e C++/CX)'
title: safe_cast (C++/CLI e C++/CX)
ms.date: 10/12/2018
ms.topic: reference
f1_keywords:
- safe_cast
- safe_cast_cpp
- stdcli::language::safe_cast
helpviewer_keywords:
- safe_cast keyword [C++]
ms.assetid: 4fa688bf-a8ec-49bc-a4c5-f48134efa4f7
ms.openlocfilehash: 7753af357fd782a513ce941b42ad0433ca24b0dd
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97172947"
---
# <a name="safe_cast-ccli-and-ccx"></a>safe_cast (C++/CLI e C++/CX)

In caso di esito positivo, l'operazione **safe_cast** restituisce l'espressione specificata come tipo specificato. In caso contrario, genera un'eccezione `InvalidCastException`.

## <a name="all-runtimes"></a>Tutti i runtime

Non esistono note per questa funzionalità del linguaggio che si applichino a tutti i runtime.

### <a name="syntax"></a>Sintassi

```cpp
[default]:: safe_cast< type-id >( expression )
```

## <a name="windows-runtime"></a>Windows Runtime

**safe_cast** consente di modificare il tipo di un'espressione specificata. In situazioni in cui si prevede che una variabile o un parametro sia convertibile in un determinato tipo, è possibile usare **safe_cast** senza un blocco **try-catch** per rilevare errori di programmazione durante lo sviluppo. Per altre informazioni, vedere [Cast (C++/CX)](../cppcx/casting-c-cx.md).

### <a name="syntax"></a>Sintassi

```cpp
[default]:: safe_cast< type-id >( expression )
```

### <a name="parameters"></a>Parametri

*ID tipo*<br/>
Tipo in cui convertire *expression*. Handle a un tipo riferimento o valore, un tipo valore oppure un riferimento di rilevamento a un tipo riferimento o valore.

*expression*<br/>
Espressione che restituisce un handle a tipo riferimento o valore oppure un riferimento di rilevamento a un tipo riferimento o valore.

### <a name="remarks"></a>Commenti

**safe_cast** genera un'eccezione `InvalidCastException` se non è possibile convertire un' *espressione* nel tipo specificato da *Type-ID*. Per intercettare `InvalidCastException` , specificare l'opzione del compilatore [/eh (modello di gestione delle eccezioni)](../build/reference/eh-exception-handling-model.md) e usare un'istruzione **try/catch** .

### <a name="requirements"></a>Requisiti

Opzione del compilatore: `/ZW`

### <a name="examples"></a>Esempio

L'esempio di codice seguente illustra come usare **safe_cast** con Windows Runtime.

```cpp
// safe_cast_ZW.cpp
// compile with: /ZW /EHsc

using namespace default;
using namespace Platform;

interface class I1 {};
interface class I2 {};
interface class I3 {};

ref class X : public I1, public I2 {};

int main(Array<String^>^ args) {
   I1^ i1 = ref new X;
   I2^ i2 = safe_cast<I2^>(i1);   // OK, I1 and I2 have common type: X
   // I2^ i3 = static_cast<I2^>(i1);   C2440 use safe_cast instead
   try {
      I3^ i4 = safe_cast<I3^>(i1);   // Fails because i1 is not derived from I3.
   }
   catch(InvalidCastException^ ic) {
   wprintf(L"Caught expected exception: %s\n", ic->Message);
   }
}
```

```Output
Caught expected exception: InvalidCastException
```

## <a name="common-language-runtime"></a>Common Language Runtime

**safe_cast** consente di modificare il tipo di un'espressione e di generare codice MSIL verificabile.

### <a name="syntax"></a>Sintassi

```cpp
[cli]:: safe_cast< type-id >( expression )
```

### <a name="parameters"></a>Parametri

*ID tipo*<br/>
Handle a un tipo riferimento o valore, un tipo valore oppure un riferimento di rilevamento a un tipo riferimento o valore.

*expression*<br/>
Espressione che restituisce un handle a tipo riferimento o valore oppure un riferimento di rilevamento a un tipo riferimento o valore.

### <a name="remarks"></a>Commenti

L'espressione `safe_cast<` *tipo-ID* espressione `>(`  `)` converte l' *espressione* dell'operando in un oggetto di tipo *Type-ID*.

Il compilatore accetta [static_cast](../cpp/static-cast-operator.md) nella maggior parte delle posizioni in cui accetta **safe_cast**.  Tuttavia, **safe_cast** è garantita la generazione di codice MSIL verificabile, dove **`static_cast`** può produrre codice MSIL non verificabile.  Vedere [Codice pure e verificabile (C++/CLI)](../dotnet/pure-and-verifiable-code-cpp-cli.md) e [Peverify.exe (strumento PEVerify)](/dotnet/framework/tools/peverify-exe-peverify-tool) per altre informazioni sul codice verificabile.

Come **`static_cast`** , **safe_cast** richiama le conversioni definite dall'utente.

Per altre informazioni sui cast, vedere [Operatori di cast](../cpp/casting-operators.md).

**safe_cast** non applica un **`const_cast`** (Cast **`const`** ).

**safe_cast** si trova nello spazio dei nomi cli.  Per altre informazioni, vedere [Spazi dei nomi Platform, default e cli](platform-default-and-cli-namespaces-cpp-component-extensions.md).

Per altre informazioni su **safe_cast**, vedere:

- [Cast di tipo C con /clr (C++/CLI)](c-style-casts-with-clr-cpp-cli.md)

- [Procedura: Usare safe_cast in C++/CLI](../dotnet/how-to-use-safe-cast-in-cpp-cli.md)

### <a name="requirements"></a>Requisiti

Opzione del compilatore: `/clr`

### <a name="examples"></a>Esempio

Un esempio di dove il compilatore non accetterà un **`static_cast`** , ma accetterà un **safe_cast** è per i cast tra tipi di interfaccia non correlati.  Con **safe_cast**, il compilatore non genera un errore di conversione ed esegue un controllo in fase di runtime per verificare se è possibile eseguire il cast

```cpp
// safe_cast.cpp
// compile with: /clr
using namespace System;

interface class I1 {};
interface class I2 {};
interface class I3 {};

ref class X : public I1, public I2 {};

int main() {
   I1^ i1 = gcnew X;
   I2^ i2 = safe_cast<I2^>(i1);   // OK, I1 and I2 have common type: X
   // I2^ i3 = static_cast<I2^>(i1);   C2440 use safe_cast instead
   try {
      I3^ i4 = safe_cast<I3^>(i1);   // fail at runtime, no common type
   }
   catch(InvalidCastException^) {
      Console::WriteLine("Caught expected exception");
   }
}
```

```Output
Caught expected exception
```

## <a name="see-also"></a>Vedi anche

[Estensioni del componente per .NET e UWP](component-extensions-for-runtime-platforms.md)
