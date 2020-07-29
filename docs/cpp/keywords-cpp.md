---
title: Parole chiave (C++)
description: Elenca le parole chiave del linguaggio standard C++, le parole chiave specifiche di Microsoft e le parole chiave specifiche del contesto.
ms.custom: index-page
ms.date: 07/25/2020
helpviewer_keywords:
- keywords [C++]
ms.assetid: d7ca94a8-f785-41ce-9f73-d3c4fd508489
ms.openlocfilehash: eaf06522a6d48caeeb84ddefb0e2e172f0af419c
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87213372"
---
# <a name="keywords-c"></a>Parole chiave (C++)

Le parole chiave sono identificatori riservati predefiniti che hanno un significato particolare. Non possono essere usati come identificatori nel programma. Le seguenti parole chiave sono riservate a Microsoft C++. I nomi con caratteri di sottolineatura e nomi iniziali specificati per C++/CX e C++/CLI sono estensioni Microsoft.

## <a name="standard-c-keywords"></a>Parole chiave C++ standard

:::row:::
    :::column:::
        [`alignas`](align-cpp.md)<br/>
        [`alignof`](alignof-operator.md)<br/>
        [`and`](bitwise-and-operator-amp.md)<sup>b</sup><br/>
        [`and_eq`](assignment-operators.md)<sup>b</sup><br/>
        [`asm`](../assembler/inline/asm.md)<sup>oggetto</sup><br/>
        [`auto`](auto-keyword.md)<br/>
        [`bitand`](bitwise-and-operator-amp.md)<sup>b</sup><br/>
        [`bitor`](bitwise-inclusive-or-operator-pipe.md)<sup>b</sup><br/>
        [`bool`](bool-cpp.md)<br/>
        [`break`](break-statement-cpp.md)<br/>
        [`case`](switch-statement-cpp.md)<br/>
        [`catch`](try-throw-and-catch-statements-cpp.md)<br/>
        [`char`](fundamental-types-cpp.md)<br/>
        [`char8_t`](fundamental-types-cpp.md)<sup>c</sup><br/>
        [`char16_t`](char-wchar-t-char16-t-char32-t.md)<br/>
        [`char32_t`](char-wchar-t-char16-t-char32-t.md)<br/>
        [`class`](class-cpp.md)<br/>
        [`compl`](one-s-complement-operator-tilde.md)<sup>b</sup><br/>
        **`concept`**<sup>c</sup><br/>
        [`const`](const-cpp.md)<br/>
        [`const_cast`](const-cast-operator.md)<br/>
        **`consteval`**<sup>c</sup><br/>
        [`constexpr`](constexpr-cpp.md)<br/>
    :::column-end:::
    :::column:::
        **`constinit`**<sup>c</sup><br/>
        [`continue`](continue-statement-cpp.md)<br/>
        **`co_await`**<sup>c</sup><br/>
        **`co_return`**<sup>c</sup><br/>
        **`co_yield`**<sup>c</sup><br/>
        [`decltype`](decltype-cpp.md)<br/>
        [`default`](switch-statement-cpp.md)<br/>
        [`delete`](delete-operator-cpp.md)<br/>
        [`do`](do-while-statement-cpp.md)<br/>
        [`double`](fundamental-types-cpp.md)<br/>
        [`dynamic_cast`](dynamic-cast-operator.md)<br/>
        [`else`](if-else-statement-cpp.md)<br/>
        [`enum`](enumerations-cpp.md)<br/>
        [`explicit`](user-defined-type-conversions-cpp.md)<br/>
        **`export`**<sup>c</sup><br/>
        [`extern`](using-extern-to-specify-linkage.md)<br/>
        [`false`](false-cpp.md)<br/>
        [`float`](fundamental-types-cpp.md)<br/>
        [`for`](for-statement-cpp.md)<br/>
        [`friend`](friend-cpp.md)<br/>
        [`goto`](goto-statement-cpp.md)<br/>
        [`if`](if-else-statement-cpp.md)<br/>
        [`inline`](inline-functions-cpp.md)<br/>
    :::column-end:::
    :::column:::
        [`int`](fundamental-types-cpp.md)<br/>
        [`long`](fundamental-types-cpp.md)<br/>
        [`mutable`](mutable-data-members-cpp.md)<br/>
        [`namespace`](namespaces-cpp.md)<br/>
        [`new`](new-operator-cpp.md)<br/>
        [`noexcept`](noexcept-cpp.md)<br/>
        [`not`](logical-negation-operator-exclpt.md)<sup>b</sup><br/>
        [`not_eq`](equality-operators-equal-equal-and-exclpt-equal.md)<sup>b</sup><br/>
        [`nullptr`](nullptr.md)<br/>
        [`operator`](operator-overloading.md)<br/>
        [`or`](logical-or-operator-pipe-pipe.md)<sup>b</sup><br/>
        [`or_eq`](assignment-operators.md)<sup>b</sup><br/>
        [`private`](private-cpp.md)<br/>
        [`protected`](protected-cpp.md)<br/>
        [`public`](public-cpp.md)<br/>
        [`register`](storage-classes-cpp.md#register) [`reinterpret_cast`](reinterpret-cast-operator.md)<br/>
        **`requires`**<sup>c</sup><br/>
        [`return`](return-statement-cpp.md)<br/>
        [`short`](fundamental-types-cpp.md)<br/>
        [`signed`](fundamental-types-cpp.md)<br/>
        [`sizeof`](sizeof-operator.md)<br/>
        [`static`](storage-classes-cpp.md)<br/>
        [`static_assert`](static-assert.md)<br/>
    :::column-end:::
    :::column:::
        [`static_cast`](static-cast-operator.md)<br/>
        [`struct`](struct-cpp.md)<br/>
        [`switch`](switch-statement-cpp.md)<br/>
        [`template`](templates-cpp.md)<br/>
        [`this`](this-pointer.md)<br/>
        [`thread_local`](storage-classes-cpp.md#thread_local)<br/>
        [`throw`](try-throw-and-catch-statements-cpp.md)<br/>
        [`true`](true-cpp.md)<br/>
        [`try`](try-throw-and-catch-statements-cpp.md)<br/>
        [`typedef`](aliases-and-typedefs-cpp.md)<br/>
        [`typeid`](typeid-operator.md)<br/>
        [`typename`](typename.md)<br/>
        [`union`](unions.md)<br/>
        [`unsigned`](fundamental-types-cpp.md)<br/>
        [`using`](using-declaration.md)Dichiarazione<br/>
        [`using`](namespaces-cpp.md#using_directives)direttiva<br/>
        [`virtual`](virtual-cpp.md)<br/>
        [`void`](void-cpp.md)<br/>
        [`volatile`](volatile-cpp.md)<br/>
        [`wchar_t`](fundamental-types-cpp.md)<br/>
        [`while`](while-statement-cpp.md)<br/>
        [`xor`](bitwise-exclusive-or-operator-hat.md)<sup>b</sup><br/>
        [`xor_eq`](assignment-operators.md)<sup>b</sup><br/>
    :::column-end:::
:::row-end:::

<sup>una</sup> parola chiave specifica di Microsoft **`__asm`** sostituisce la **`asm`** sintassi C++. **`asm`** è riservato per la compatibilità con altre implementazioni di C++, ma non è implementato. Usare **`__asm`** per l'assembly inline su destinazioni x86. Microsoft C++ non supporta l'assembly inline per altre destinazioni.

<sup>b</sup> i sinonimi degli operatori estesi sono parole chiave quando [`/permissive-`](../build/reference/permissive-standards-conformance.md) si specificano o [ `/Za` \( disabilitano le estensioni del linguaggio](../build/reference/za-ze-disable-language-extensions.md) . Non sono parole chiave quando le estensioni Microsoft sono abilitate.

<sup>c</sup> supportato quando [`/std:c++latest`](../build/reference/std-specify-language-standard-version.md) è specificato.

## <a name="microsoft-specific-c-keywords"></a>Parole chiave C++ specifiche di Microsoft

In C++, gli identificatori che contengono due caratteri di sottolineatura consecutivi sono riservati per le implementazioni del compilatore. La convenzione Microsoft prevede di precedere le parole chiave specifiche di Microsoft con due caratteri di sottolineatura. Queste parole non possono essere usate come nomi di identificatori.

Le estensioni Microsoft sono attivate per impostazione predefinita. Per assicurarsi che i programmi siano completamente portabili, è possibile disabilitare le estensioni Microsoft specificando l' [`/permissive-`](../build/reference/permissive-standards-conformance.md) opzione o [ `/Za` \( disabilitare le estensioni del linguaggio](../build/reference/za-ze-disable-language-extensions.md) durante la compilazione. Queste opzioni disabilitano alcune parole chiave specifiche di Microsoft.

Quando le estensioni Microsoft sono abilitate, è possibile usare le parole chiave specifiche di Microsoft nei programmi. Per la compatibilità con ANSI, tali parole chiave sono precedute da un doppio carattere di sottolineatura. Per compatibilità con le versioni precedenti, sono supportate le versioni con un singolo carattere di sottolineatura di molte parole chiave con doppio carattere di sottolineatura. La **`__cdecl`** parola chiave è disponibile senza carattere di sottolineatura iniziali.

La **`__asm`** parola chiave sostituisce la **`asm`** sintassi C++. **`asm`** è riservato per la compatibilità con altre implementazioni di C++, ma non è implementato. Usare **`__asm`**.

La **`__based`** parola chiave ha usi limitati per le compilazioni di destinazione a 32 bit e a 64 bit.

:::row:::
    :::column:::
        [`__alignof`](alignof-operator.md)<sup>e</sup><br/>
        [`__asm`](../assembler/inline/asm.md)<sup>e</sup><br/>
        [`__assume`](../intrinsics/assume.md)<sup>e</sup><br/>
        [`__based`](based-pointers-cpp.md)<sup>e</sup><br/>
        [`__cdecl`](cdecl.md)<sup>e</sup><br/>
        [`__declspec`](declspec.md)<sup>e</sup><br/>
        [`__event`](event.md)<br/>
        [`__except`](try-except-statement.md)<sup>e</sup><br/>
        [`__fastcall`](fastcall.md)<sup>e</sup><br/>
        [`__finally`](try-finally-statement.md)<sup>e</sup><br/>
        [`__forceinline`](inline-functions-cpp.md)<sup>e</sup><br/>
    :::column-end:::
    :::column:::
        [`__hook`](hook.md)<sup>d</sup><br/>
        [`__if_exists`](if-exists-statement.md)<br/>
        [`__if_not_exists`](if-not-exists-statement.md)<br/>
        [`__inline`](inline-functions-cpp.md)<sup>e</sup><br/>
        [`__int16`](int8-int16-int32-int64.md)<sup>e</sup><br/>
        [`__int32`](int8-int16-int32-int64.md)<sup>e</sup><br/>
        [`__int64`](int8-int16-int32-int64.md)<sup>e</sup><br/>
        [`__int8`](int8-int16-int32-int64.md)<sup>e</sup><br/>
        [`__interface`](interface.md)<br/>
        [`__leave`](try-finally-statement.md)<sup>e</sup><br/>
        [`__m128`](m128.md)<br/>
    :::column-end:::
    :::column:::
        [`__m128d`](m128d.md)<br/>
        [`__m128i`](m128i.md)<br/>
        [`__m64`](m64.md)<br/>
        [`__multiple_inheritance`](inheritance-keywords.md)<sup>e</sup><br/>
        [`__ptr32`](ptr32-ptr64.md)<sup>e</sup><br/>
        [`__ptr64`](ptr32-ptr64.md)<sup>e</sup><br/>
        [`__raise`](raise.md)<br/>
        [`__restrict`](extension-restrict.md)<sup>e</sup><br/>
        [`__single_inheritance`](inheritance-keywords.md)<sup>e</sup><br/>
        [`__sptr`](sptr-uptr.md)<sup>e</sup><br/>
        [`__stdcall`](stdcall.md)<sup>e</sup><br/>
    :::column-end:::
    :::column:::
        [`__super`](super.md)<br/>
        [`__thiscall`](thiscall.md)<br/>
        [`__unaligned`](unaligned.md)<sup>e</sup><br/>
        [`__unhook`](unhook.md)<sup>d</sup><br/>
        [`__uptr`](sptr-uptr.md)<sup>e</sup><br/>
        [`__uuidof`](uuidof-operator.md)<sup>e</sup><br/>
        [`__vectorcall`](vectorcall.md)<sup>e</sup><br/>
        [`__virtual_inheritance`](inheritance-keywords.md)<sup>e</sup><br/>
        [`__w64`](w64.md)<sup>e</sup><br/>
        [`__wchar_t`](fundamental-types-cpp.md)<br/>
    :::column-end:::
:::row-end:::

funzione intrinseca <sup>d</sup> utilizzata nella gestione degli eventi.

<sup>e</sup> per compatibilità con le versioni precedenti, queste parole chiave sono disponibili con due caratteri di sottolineatura iniziali e un singolo carattere di sottolineatura principale quando le estensioni Microsoft sono abilitate (impostazione predefinita).

## <a name="microsoft-keywords-in-__declspec-modifiers"></a>Parole chiave Microsoft nei modificatori di __declspec

Questi identificatori sono attributi estesi per il **`__declspec`** modificatore. Sono considerate parole chiave all'interno di tale contesto.

:::row:::
    :::column:::
        [`align`](align-cpp.md)<br/>
        [`allocate`](allocate.md)<br/>
        [`allocator`](allocator.md)<br/>
        [`appdomain`](appdomain.md)<br/>
        [`code_seg`](code-seg-declspec.md)<br/>
        [`deprecated`](deprecated-cpp.md)
    :::column-end:::
    :::column:::
        [`dllexport`](dllexport-dllimport.md)<br/>
        [`dllimport`](dllexport-dllimport.md)<br/>
        [`jitintrinsic`](jitintrinsic.md)<br/>
        [`naked`](naked-cpp.md)<br/>
        [`noalias`](noalias.md)<br/>
        [`noinline`](noinline.md)
    :::column-end:::
    :::column:::
        [`noreturn`](noreturn.md)<br/>
        [`nothrow`](nothrow-cpp.md)<br/>
        [`novtable`](novtable.md)<br/>
        [`process`](process.md)<br/>
        [`property`](property-cpp.md)<br/>
        [`restrict`](restrict.md)
    :::column-end:::
    :::column:::
        [`safebuffers`](safebuffers.md)<br/>
        [`selectany`](selectany.md)<br/>
        [`spectre`](spectre.md)<br/>
        [`thread`](thread.md)<br/>
        [`uuid`](uuid-cpp.md)
    :::column-end:::
:::row-end:::

## <a name="ccli-and-ccx-keywords"></a>Parole chiave c++/CLI e C++/CX

:::row:::
    :::column:::
        [`__abstract`](../dotnet/declaration-of-a-managed-class-type.md)<sup>f</sup><br/>
        [`__box`](../dotnet/value-type-semantics.md)<sup>f</sup><br/>
        [`__delegate`](../dotnet/delegates-and-events.md)<sup>f</sup><br/>
        [`__gc`](../dotnet/declaration-of-a-clr-reference-class-object.md)<sup>f</sup><br/>
        [`__identifier`](../extensions/identifier-cpp-cli.md)<br/>
        [`__nogc`](../dotnet/declaration-of-a-clr-reference-class-object.md)<sup>f</sup><br/>
        [`__noop`](../intrinsics/noop.md)<br/>
        **`__pin`**<sup>f</sup><br/>
        **`__property`**<sup>f</sup><br/>
        **`__sealed`**<sup>f</sup><br/>
    :::column-end:::
    :::column:::
        [`__try_cast`](../dotnet/cast-notation-and-introduction-of-safe-cast-angles.md)<sup>f</sup><br/>
        [`__value`](../dotnet/value-type-semantics.md)<sup>f</sup><br/>
        [`abstract`](../extensions/abstract-cpp-component-extensions.md)<sup>g</sup><br/>
        [`array`](../extensions/arrays-cpp-component-extensions.md)<sup>g</sup><br/>
        [`as_friend`](../preprocessor/hash-using-directive-cpp.md)<br/>
        [`delegate`](../extensions/delegate-cpp-component-extensions.md)<sup>g</sup><br/>
        [`enum class`](../extensions/enum-class-cpp-component-extensions.md)<br/>
        [`enum struct`](../extensions/enum-class-cpp-component-extensions.md)<br/>
        [`event`](../extensions/event-cpp-component-extensions.md)<sup>g</sup><br/>
    :::column-end:::
    :::column:::
        [`finally`](../dotnet/finally.md)<br/>
        [`for each in`](../dotnet/for-each-in.md)<br/>
        [`gcnew`](../extensions/ref-new-gcnew-cpp-component-extensions.md)<sup>g</sup><br/>
        [`generic`](../extensions/generics-cpp-component-extensions.md)<sup>g</sup><br/>
        [`initonly`](../dotnet/initonly-cpp-cli.md)<br/>
        [`interface class`](../extensions/interface-class-cpp-component-extensions.md)<sup>g</sup><br/>
        [`interface struct`](../extensions/interface-class-cpp-component-extensions.md)<sup>g</sup><br/>
        [`interior_ptr`](../extensions/interior-ptr-cpp-cli.md)<sup>g</sup><br/>
        [`literal`](../extensions/literal-cpp-component-extensions.md)<sup>g</sup><br/>
    :::column-end:::
    :::column:::
        [`new`](../extensions/new-new-slot-in-vtable-cpp-component-extensions.md)<sup>g</sup><br/>
        [`property`](../extensions/property-cpp-component-extensions.md)<sup>g</sup><br/>
        [`ref class`](../extensions/classes-and-structs-cpp-component-extensions.md)<br/>
        [`ref struct`](../extensions/classes-and-structs-cpp-component-extensions.md)<br/>
        [`safecast`](../extensions/safe-cast-cpp-component-extensions.md)<br/>
        [`sealed`](../extensions/sealed-cpp-component-extensions.md)<sup>g</sup><br/>
        [`typeid`](../extensions/typeid-cpp-component-extensions.md)<br/>
        [`value class`](../extensions/classes-and-structs-cpp-component-extensions.md)<sup>g</sup><br/>
        [`value struct`](../extensions/classes-and-structs-cpp-component-extensions.md)<sup>g</sup><br/>
    :::column-end:::
:::row-end:::

<sup>f</sup> applicabile solo a estensioni gestite per C++. Questa sintassi è ora deprecata. Per altre informazioni, vedere [Estensioni componenti per le piattaforme runtime](../extensions/component-extensions-for-runtime-platforms.md).

<sup>f</sup> applicabile a C++/CLI.

## <a name="see-also"></a>Vedere anche

[Convenzioni lessicali](lexical-conventions.md)<br/>
[Operatori, precedenza e associatività predefiniti di C++](cpp-built-in-operators-precedence-and-associativity.md)
