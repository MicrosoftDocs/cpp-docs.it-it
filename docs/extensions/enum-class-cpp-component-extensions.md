---
title: enum class (C++/CLI e C++/CX)
ms.date: 10/12/2018
ms.topic: reference
ms.assetid: 8010fa8c-bad6-45b4-8214-b4db64d7ffe1
ms.openlocfilehash: a1b99cb2265c9a9bdb40a7239a21412123772570
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87219716"
---
# <a name="enum-class--ccli-and-ccx"></a>enum class (C++/CLI e C++/CX)

Dichiara un'enumerazione nell'ambito dello spazio dei nomi che è un tipo definito dall'utente costituito da un set di costanti denominate definite enumeratori.

## <a name="all-runtimes"></a>Tutti i runtime

### <a name="remarks"></a>Osservazioni

C++/CX e C++/CLI supportano **public enum class** e **private enum class**, che sono simili a **enum class** C++ standard, ma con l'aggiunta dell'identificatore di accessibilità. In **/clr** il tipo **enum class** C++11 è consentito, ma genera l'avviso C4472 che ha lo scopo di verificare se si vuole specificare davvero il tipo enumerazione ISO e non il tipo C++/CX e C++/CLI. Per ulteriori informazioni sulla parola chiave C++ standard ISO **`enum`** , vedere [enumerazioni](../cpp/enumerations-cpp.md).

## <a name="windows-runtime"></a>Windows Runtime

### <a name="syntax"></a>Sintassi

```cpp
      access
      enum class
      enumeration-identifier
      [:underlying-type] { enumerator-list } [var];
accessenum structenumeration-identifier[:underlying-type] { enumerator-list } [var];
```

### <a name="parameters"></a>Parametri

*accesso*<br/>
Accessibilità dell'enumerazione, che può essere **`public`** o **`private`** .

*enumeration-identifier*<br/>
Nome dell'enumerazione.

*tipo sottostante*<br/>
(Facoltativo) Tipo sottostante dell'enumerazione.

(Facoltativo. Windows Runtime solo) il tipo sottostante dell'enumerazione, che può essere **`bool`** ,, **`char`** `char16` , `int16` , `uint16` , **`int`** , `uint32` , `int64` o `uint64` .

*enumerator-list*<br/>
Elenco delimitato da virgole di nomi dell'enumeratore.

Il valore di ogni enumeratore è un'espressione costante che viene definita in modo implicito dal compilatore o in modo esplicito dalla notazione *Enumerator* `=` *Constant-Expression*. Per impostazione predefinita, il valore del primo enumeratore è zero se è definito in modo implicito. Il valore di ogni enumeratore successivo definito in modo implicito è il valore dell'enumeratore precedente + 1.

*var*<br/>
(Facoltativo) Nome di una variabile del tipo di enumerazione.

### <a name="remarks"></a>Osservazioni

Per altre informazioni ed esempi, vedere [Enumerazioni](../cppcx/enums-c-cx.md).

Il compilatore genera messaggi di errore se l'espressione costante che definisce il valore di un enumeratore non può essere rappresentata da *underlying-type*.  Tuttavia, il compilatore non segnala un errore per un valore non appropriato per il tipo sottostante. Ad esempio:

- Se *underlying-type* è numerico e un enumeratore specifica il valore massimo per questo tipo, non è possibile rappresentare il valore della enumerazione successiva definita in modo implicito.

- Se il *tipo sottostante* è **`bool`** e vengono definiti in modo implicito più di due enumeratori, non è possibile rappresentare gli enumeratori dopo i primi due.

- Se *underlying-type* è `char16`e il valore di enumerazione varia da 0xD800 a 0xDFFF, il valore può essere rappresentato. Tuttavia, il valore non è logicamente corretto perché rappresenta metà di una coppia di surrogati Unicode che non devono essere visualizzati singolarmente.

### <a name="requirements"></a>Requisiti

Opzione del compilatore: `/ZW`

## <a name="common-language-runtime"></a>Common Language Runtime

### <a name="syntax"></a>Sintassi

```cpp
      access
      enum class
      name [:type] { enumerator-list } var;
accessenum structname [:type] { enumerator-list } var;
```

### <a name="parameters"></a>Parametri

*accesso*<br/>
Accessibilità dell'enumerazione. Può essere **`public`** o **`private`** .

*enumerator-list*<br/>
Elenco delimitato da virgole di identificatori (enumeratori) nell'enumerazione.

*nome*<br/>
Nome dell'enumerazione. Le enumerazioni gestite anonime non sono consentite.

*type*<br/>
(Facoltativo) Tipo sottostante degli *identificatori*. Può trattarsi di qualsiasi tipo scalare, ad esempio versioni con o senza firma di **`int`** , **`short`** o **`long`** .  **`bool`****`char`** è consentito anche o.

*var*<br/>
(Facoltativo) Nome di una variabile del tipo di enumerazione.

### <a name="remarks"></a>Osservazioni

**enum class** ed **enum struct** sono dichiarazioni equivalenti.

Sono disponibili due tipi di enumerazioni: gestite o C++/CX e standard.

Un'enumerazione gestita o C++/CX potrebbe essere definita come riportato di seguito:

```cpp
public enum class day {sun, mon };
```

ed è semanticamente equivalente a:

```cpp
ref class day {
public:
   static const int sun = 0;
   static const int mon = 1;
};
```

Un'enumerazione standard può essere definita come riportato di seguito:

```cpp
enum day2 { sun, mon };
```

ed è semanticamente equivalente a:

```cpp
static const int sun = 0;
static const int mon = 1;
```

I nomi degli enumeratori gestiti (*identificatori*) non vengono inseriti nell'ambito in cui è definita l'enumerazione. Tutti i riferimenti agli enumeratori devono essere completi (*nome*`::`*identificatore*).  Per questo motivo, è possibile definire un'enumerazione gestita anonima.

Gli enumeratori di un'enumerazione standard vengono inseriti in modo forte nell'ambito di inclusione.  Ovvero, se è presente un altro simbolo con lo stesso nome di un enumeratore nell'ambito di inclusione, il compilatore genererà un errore.

In Visual Studio 2002 e Visual Studio 2003 gli enumeratori vengono inseriti in modo debole (visibile nell'ambito di inclusione a meno che non sia presente un altro identificatore con lo stesso nome).

Se viene definita un'enumerazione C++ standard (senza **`class`** o **`struct`** ), la compilazione con `/clr` provocherà la compilazione dell'enumerazione come enumerazione gestita.  L'enumerazione presenta comunque la semantica di un'enumerazione non gestita.  Si noti che il compilatore inserisce un attributo `Microsoft::VisualC::NativeEnumAttribute` per identificare i casi in cui il programmatore vuole usare un'enumerazione nativa.  Gli altri compilatori visualizzeranno l'enumerazione standard solo come enumerazione gestita.

Un'enumerazione standard denominata e compilata con `/clr` sarà visibile nell'assembly come enumerazione gestita e potrà essere usata da qualsiasi altro compilatore gestito.   Tuttavia, un'enumerazione standard senza nome non sarà visibile pubblicamente nell'assembly.

In Visual Studio 2002 e Visual Studio 2003 un'enumerazione standard usata come tipo nel parametro di funzione:

```cpp
// mcppv2_enum.cpp
// compile with: /clr
enum E { a, b };
void f(E) {System::Console::WriteLine("hi");}

int main() {
   E myi = b;
   f(myi);
}
```

genererebbe le operazioni seguenti in MSIL per la firma della funzione:

```cpp
void f(int32);
```

Nelle versioni correnti del compilatore, tuttavia, l'enumerazione standard viene generata come enumerazione gestita con [NativeEnumAttribute] e le operazioni seguenti in MSIL per la firma della funzione:

```cpp
void f(E)
```

Per ulteriori informazioni sulle enumerazioni native, vedere [Dichiarazioni di enumerazioni C++](../cpp/enumerations-cpp.md).

Per altre informazioni sulle enumerazioni CLR, vedere:

- [Tipo sottostante di un'enumerazione](../dotnet/how-to-define-and-consume-enums-in-cpp-cli.md)

### <a name="requirements"></a>Requisiti

Opzione del compilatore: `/clr`

### <a name="examples"></a>Esempi

```cpp
// mcppv2_enum_2.cpp
// compile with: /clr
// managed enum
public enum class m { a, b };

// standard enum
public enum n { c, d };

// unnamed, standard enum
public enum { e, f } o;

int main()
{
   // consume managed enum
   m mym = m::b;
   System::Console::WriteLine("no automatic conversion to int: {0}", mym);
   System::Console::WriteLine("convert to int: {0}", (int)mym);

   // consume standard enum
   n myn = d;
   System::Console::WriteLine(myn);

   // consume standard, unnamed enum
   o = f;
   System::Console::WriteLine(o);
}
```

```Output
no automatic conversion to int: b

convert to int: 1

1

1
```

## <a name="see-also"></a>Vedere anche

[Estensioni del componente per .NET e UWP](component-extensions-for-runtime-platforms.md)
