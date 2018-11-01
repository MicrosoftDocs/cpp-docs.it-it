---
title: safe_cast (C + c++ /CLI e c++ /CX)
ms.date: 10/12/2018
ms.topic: reference
f1_keywords:
- safe_cast
- safe_cast_cpp
- stdcli::language::safe_cast
helpviewer_keywords:
- safe_cast keyword [C++]
ms.assetid: 4fa688bf-a8ec-49bc-a4c5-f48134efa4f7
ms.openlocfilehash: a65b39cbd658787324c1951fd1a53e4257f33a4a
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50443745"
---
# <a name="safecast-ccli-and-ccx"></a>safe_cast (C + c++ /CLI e c++ /CX)

Il **safe_cast** operazione restituisce l'espressione specificata come tipo specificato, se ha esito positivo; in caso contrario, genera `InvalidCastException`.

## <a name="all-runtimes"></a>Tutti i runtime

Non esistono note per questa funzionalità del linguaggio che si applichino a tutti i runtime.

### <a name="syntax"></a>Sintassi

```cpp
[default]:: safe_cast< type-id >( expression )
```

## <a name="windows-runtime"></a>Windows Runtime

**safe_cast** consente di modificare il tipo di un'espressione specificata. In situazioni in cui si prevede una variabile o parametro sia convertibile in un determinato tipo, è possibile usare **safe_cast** senza una **try-catch** blocco per rilevare gli errori di programmazione durante lo sviluppo. Per altre informazioni, vedere [esegue il cast (C + c++ /CX)](https://msdn.microsoft.com/library/windows/apps/hh755802.aspx).

### <a name="syntax"></a>Sintassi

```cpp
[default]:: safe_cast< type-id >( expression )
```

### <a name="parameters"></a>Parametri

*ID del tipo*<br/>
Tipo in cui convertire *espressione* per. Handle a un tipo riferimento o valore, un tipo valore oppure un riferimento di rilevamento a un tipo riferimento o valore.

*Espressione*<br/>
Espressione che restituisce un handle a tipo riferimento o valore oppure un riferimento di rilevamento a un tipo riferimento o valore.

### <a name="remarks"></a>Note

**safe_cast** genera un'eccezione `InvalidCastException` se non è possibile convertire *expression* per il tipo specificato dal *id tipo*. Per intercettare `InvalidCastException`, specificare il [/EH (modello di gestione delle eccezioni)](../build/reference/eh-exception-handling-model.md) l'opzione del compilatore e usare una **try/catch** istruzione.

### <a name="requirements"></a>Requisiti

Opzione del compilatore: `/ZW`

### <a name="examples"></a>Esempi

Esempio di codice seguente viene illustrato come utilizzare **safe_cast** con il Runtime di Windows.

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

**safe_cast** consente di modificare il tipo di un'espressione e generare codice MSIL verificabile.

### <a name="syntax"></a>Sintassi

```cpp
[cli]:: safe_cast< type-id >( expression )
```

### <a name="parameters"></a>Parametri

*ID del tipo*<br/>
Handle a un tipo riferimento o valore, un tipo valore oppure un riferimento di rilevamento a un tipo riferimento o valore.

*Espressione*<br/>
Espressione che restituisce un handle a tipo riferimento o valore oppure un riferimento di rilevamento a un tipo riferimento o valore.

### <a name="remarks"></a>Note

L'espressione `safe_cast<` *tipo-id*`>(`*espressione* `)` Converte l'operando *espressione* a un oggetto di tipo *id tipo*.

Il compilatore accetta un [static_cast](../cpp/static-cast-operator.md) nella maggior parte delle posizioni che accetterà una **safe_cast**.  Tuttavia **safe_cast** è garantita per produrre codice MSIL verificabile, mentre un **static_cast** è stato possibile produrre codice MSIL non verificabile.  Visualizzare [codice Pure e verificabile (C + + CLI)](../dotnet/pure-and-verifiable-code-cpp-cli.md) e [Peverify.exe (strumento PEVerify)](/dotnet/framework/tools/peverify-exe-peverify-tool) per altre informazioni sul codice verificabile.

Ad esempio **static_cast**, **safe_cast** richiama le conversioni definite dall'utente.

Per altre informazioni sui cast, vedere [operatori di cast](../cpp/casting-operators.md).

**safe_cast** non si applica una **const_cast** (eseguire il cast **const**).

**safe_cast** è nello spazio dei nomi cli.  Visualizzare [Platform, default e cli gli spazi dei nomi](../windows/platform-default-and-cli-namespaces-cpp-component-extensions.md) per altre informazioni.

Per ulteriori informazioni sul **safe_cast**, vedere:

- [Cast di tipo C con /clr (C + + CLI)](../windows/c-style-casts-with-clr-cpp-cli.md)

- [Procedura: Usare safe_cast in C++/CLI](../dotnet/how-to-use-safe-cast-in-cpp-cli.md)

### <a name="requirements"></a>Requisiti

Opzione del compilatore: `/clr`

### <a name="examples"></a>Esempi

Un esempio del punto in cui il compilatore non accetterà un **static_cast** ma accetterà un **safe_cast** è per i cast tra tipi di interfaccia non correlati.  Con **safe_cast**, il compilatore non genererà un errore di conversione ed eseguirà un controllo in fase di esecuzione per vedere se è possibile eseguire il cast

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

## <a name="see-also"></a>Vedere anche

[Estensioni componenti per .NET e UWP](../windows/component-extensions-for-runtime-platforms.md)
