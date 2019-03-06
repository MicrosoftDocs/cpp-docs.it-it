---
title: classe enum (C + c++ /CLI e c++ /CX)
ms.date: 10/12/2018
ms.topic: reference
ms.assetid: 8010fa8c-bad6-45b4-8214-b4db64d7ffe1
ms.openlocfilehash: aee3d4f44c18074ca536ff028565bbbd0e37d04c
ms.sourcegitcommit: bff17488ac5538b8eaac57156a4d6f06b37d6b7f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2019
ms.locfileid: "57417424"
---
# <a name="enum-class--ccli-and-ccx"></a>classe enum (C + c++ /CLI e c++ /CX)

Dichiara un'enumerazione nell'ambito dello spazio dei nomi che è un tipo definito dall'utente costituito da un set di costanti denominate definite enumeratori.

## <a name="all-runtimes"></a>Tutti i runtime

### <a name="remarks"></a>Note

C + c++ /CX e c++ /CLI supporto dell'interfaccia della riga **classe enum pubblica** e **classe di enumerazione privata** che sono simili a C++ standard **classe enum** ma con l'aggiunta di accessibilità identificatore. Sotto **/clr**, c++11 **classe enum** tipo è consentito, ma verrà generato l'avviso C4472 per verificare che si desidera effettivamente il tipo enum ISO e non di C + + c++ /CX e c++ /CLI tipo CLI. Per altre informazioni su C++ Standard ISO **enum** parola chiave, vedere [enumerazioni](../cpp/enumerations-cpp.md).

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

*access*<br/>
L'accessibilità dell'enumerazione, che può essere **pubbliche** oppure **privati**.

*enumeration-identifier*<br/>
Nome dell'enumerazione.

*underlying-type*<br/>
(Facoltativo) Tipo sottostante dell'enumerazione.

(Facoltativo. Solo per Windows Runtime) il tipo sottostante dell'enumerazione, che può essere **bool**, **char**, `char16`, `int16`, `uint16`, **int**, `uint32`, `int64`, o `uint64`.

*enumerator-list*<br/>
Elenco delimitato da virgole di nomi dell'enumeratore.

Il valore di ogni enumeratore è un'espressione costante che viene definita in modo implicito dal compilatore o in modo esplicito dalla notazione *enumerator*`=`*constant-expression*. Per impostazione predefinita, il valore del primo enumeratore è zero se è definito in modo implicito. Il valore di ogni enumeratore successivo definito in modo implicito è il valore dell'enumeratore precedente + 1.

*var*<br/>
(Facoltativo) Nome di una variabile del tipo di enumerazione.

### <a name="remarks"></a>Note

Per altre informazioni ed esempi, vedere [Enumerazioni](../cppcx/enums-c-cx.md).

Il compilatore genera messaggi di errore se l'espressione costante che definisce il valore di un enumeratore non può essere rappresentata da *underlying-type*.  Tuttavia, il compilatore non segnala un errore per un valore non appropriato per il tipo sottostante. Ad esempio:

- Se *underlying-type* è numerico e un enumeratore specifica il valore massimo per questo tipo, non è possibile rappresentare il valore della enumerazione successiva definita in modo implicito.

- Se *tipo sottostante* viene **bool**, e più di due enumeratori sono implicitamente definiti, gli enumeratori dopo i primi due non possono essere rappresentati.

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

*access*<br/>
Accessibilità dell'enumerazione. Può essere rappresentata **pubbliche** oppure **privati**.

*enumerator-list*<br/>
Elenco delimitato da virgole di identificatori (enumeratori) nell'enumerazione.

*name*<br/>
Nome dell'enumerazione. Le enumerazioni gestite anonime non sono consentite.

*type*<br/>
(Facoltativo) Il tipo sottostante del *identificatori*. Può trattarsi di qualsiasi tipo scalare, ad esempio versioni con o senza segno di **int**, **breve**, o **long**.  **bool** oppure **char** è consentito.

*var*<br/>
(Facoltativo) Nome di una variabile del tipo di enumerazione.

### <a name="remarks"></a>Note

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

In Visual Studio 2002 e Visual Studio 2003 gli enumeratori sono stati inseriti in modo debole (visibile nell'ambito di inclusione a meno che non si è verificato un altro identificatore con lo stesso nome).

Se viene definita un'enumerazione C++ standard (senza **classe** oppure **struct**), la compilazione con `/clr` causerà l'enumerazione deve essere compilato come enumerazione gestita.  L'enumerazione presenta comunque la semantica di un'enumerazione non gestita.  Si noti che il compilatore viene inserito un attributo, `Microsoft::VisualC::NativeEnumAttribute` per identificare l'intento del programmatore affinché l'enumerazione sia nativa.  Gli altri compilatori visualizzeranno l'enumerazione standard solo come enumerazione gestita.

Istanza denominata, enumerazione standard compilato con `/clr` saranno visibili nell'assembly come enumerazione gestita e possono essere usati da qualsiasi altro compilatore gestito.   Tuttavia, un'enumerazione standard senza nome non sarà visibile pubblicamente nell'assembly.

In Visual Studio 2002 e Visual Studio 2003, un'enumerazione standard usata come tipo di un parametro di funzione:

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

[Estensioni componenti per .NET e UWP](../windows/component-extensions-for-runtime-platforms.md)