---
title: Assembly Friend (C++)
ms.date: 11/04/2016
helpviewer_keywords:
- friend assemblies, Visual C++
ms.assetid: 8d55fee0-b7c2-4fbe-a23b-dfe424dc71cd
ms.openlocfilehash: a42caaf07f6ec0c71f63d6a0df8a79fff6f737e6
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87221445"
---
# <a name="friend-assemblies-c"></a>Assembly Friend (C++)

Per i runtime applicabili, la funzionalità del linguaggio degli *assembly Friend* rende i tipi che si trovano nell'ambito dello spazio dei nomi o nell'ambito globale in un componente assembly accessibile a uno o più assembly client o. netmodule.

## <a name="all-runtimes"></a>Tutti i runtime

**Osservazioni:**

Questa funzionalità del linguaggio non è supportata in tutti i Runtime.

## <a name="windows-runtime"></a>Windows Runtime

**Osservazioni:**

Questa funzionalità del linguaggio non è supportata in Windows Runtime.

### <a name="requirements"></a>Requisiti

Opzione del compilatore: **/ZW**

## <a name="common-language-runtime"></a>Common Language Runtime

**Osservazioni:**

#### <a name="to-make-types-at-namespace-scope-or-global-scope-in-an-assembly-component-accessible-to-a-client-assembly-or-netmodule"></a>Per rendere i tipi nell'ambito dello spazio dei nomi o nell'ambito globale in un componente assembly accessibile a un assembly client o a. netmodule

1. Nel componente specificare un attributo assembly <xref:System.Runtime.CompilerServices.InternalsVisibleToAttribute> e passare il nome dell'assembly client o di. netmodule che accederà ai tipi nell'ambito dello spazio dei nomi o nell'ambito globale nel componente.  È possibile specificare più assembly client o. netmodule specificando attributi aggiuntivi.

1. Nell'assembly client o in. netmodule, quando si fa riferimento all'assembly del componente usando `#using` , passare l' **`as_friend`** attributo.  Se si specifica l' **`as_friend`** attributo per un assembly che non specifica `InternalsVisibleToAttribute` , verrà generata un'eccezione in fase di esecuzione se si tenta di accedere a un tipo nell'ambito dello spazio dei nomi o nell'ambito globale nel componente.

Viene generato un errore di compilazione se l'assembly che contiene l' <xref:System.Runtime.CompilerServices.InternalsVisibleToAttribute> attributo non dispone di un nome sicuro, ma l'assembly client che utilizza l' **`as_friend`** attributo.

Sebbene i tipi nell'ambito dello spazio dei nomi e nell'ambito globale possono essere noti a un assembly client o a un. netmodule, l'accessibilità dei membri è ancora attiva.  Ad esempio, non è possibile accedere a un membro privato.

È necessario concedere in modo esplicito l'accesso a tutti i tipi in un assembly.  Ad esempio, l'assembly C non ha accesso a tutti i tipi nell'assembly A se l'assembly C fa riferimento all'assembly B e l'assembly B ha accesso a tutti i tipi nell'assembly A.

Per informazioni su come firmare, ovvero come assegnare un nome sicuro a, ovvero un assembly compilato con il compilatore Microsoft C++, vedere [assembly con nome sicuro (firma degli assembly) (C++/CLI)](../dotnet/strong-name-assemblies-assembly-signing-cpp-cli.md).

In alternativa all'utilizzo della funzionalità assembly Friend, è possibile utilizzare <xref:System.Security.Permissions.StrongNameIdentityPermission> per limitare l'accesso ai singoli tipi.

### <a name="requirements"></a>Requisiti

Opzione del compilatore: **/clr**

### <a name="examples"></a>Esempi

Nell'esempio di codice seguente viene definito un componente che specifica un assembly client che ha accesso ai tipi nel componente.

```cpp
// friend_assemblies.cpp
// compile by using: /clr /LD
using namespace System::Runtime::CompilerServices;
using namespace System;
// an assembly attribute, not bound to a type
[assembly:InternalsVisibleTo("friend_assemblies_2")];

ref class Class1 {
public:
   void Test_Public() {
      Console::WriteLine("Class1::Test_Public");
   }
};
```

L'esempio di codice successivo accede a un tipo privato nel componente.

```cpp
// friend_assemblies_2.cpp
// compile by using: /clr
#using "friend_assemblies.dll" as_friend

int main() {
   Class1 ^ a = gcnew Class1;
   a->Test_Public();
}
```

```Output
Class1::Test_Public
```

Nell'esempio di codice successivo viene definito un componente, ma non viene specificato un assembly client che avrà accesso ai tipi nel componente.

Si noti che il componente è collegato tramite **/opt: NOREF**. In questo modo si garantisce che i tipi privati vengano emessi nei metadati del componente, che non è necessario quando l' `InternalsVisibleTo` attributo è presente. Per ulteriori informazioni, vedere [/opt (ottimizzazioni)](../build/reference/opt-optimizations.md).

```cpp
// friend_assemblies_3.cpp
// compile by using: /clr /LD /link /opt:noref
using namespace System;

ref class Class1 {
public:
   void Test_Public() {
      Console::WriteLine("Class1::Test_Public");
   }
};
```

Nell'esempio di codice seguente viene definito un client che tenta di accedere a un tipo privato in un componente che non fornisce accesso ai tipi privati. A causa del comportamento del runtime, se si vuole intercettare l'eccezione, è necessario tentare di accedere a un tipo privato in una funzione helper.

```cpp
// friend_assemblies_4.cpp
// compile by using: /clr
#using "friend_assemblies_3.dll" as_friend
using namespace System;

void Test() {
   Class1 ^ a = gcnew Class1;
}

int main() {
   // to catch this kind of exception, use a helper function
   try {
      Test();
   }
   catch(MethodAccessException ^ e) {
      Console::WriteLine("caught an exception");
   }
}
```

```Output
caught an exception
```

Nell'esempio di codice successivo viene illustrato come creare un componente con nome sicuro che specifica un assembly client che avrà accesso ai tipi nel componente.

```cpp
// friend_assemblies_5.cpp
// compile by using: /clr /LD /link /keyfile:friend_assemblies.snk
using namespace System::Runtime::CompilerServices;
using namespace System;
// an assembly attribute, not bound to a type

[assembly:InternalsVisibleTo("friend_assemblies_6, PublicKey=00240000048000009400000006020000002400005253413100040000010001000bf45d77fd991f3bff0ef51af48a12d35699e04616f27ba561195a69ebd3449c345389dc9603d65be8cd1987bc7ea48bdda35ac7d57d3d82c666b7fc1a5b79836d139ef0ac8c4e715434211660f481612771a9f7059b9b742c3d8af00e01716ed4b872e6f1be0e94863eb5745224f0deaba5b137624d7049b6f2d87fba639fc5")];

private ref class Class1 {
public:
   void Test_Public() {
      Console::WriteLine("Class1::Test_Public");
   }
};
```

Si noti che il componente deve specificare la chiave pubblica. Si consiglia di eseguire i comandi seguenti in sequenza al prompt dei comandi per creare una coppia di chiavi e ottenere la chiave pubblica:

**sn-d friend_assemblies. snk**

**sn-k friend_assemblies. snk**

**sn-i friend_assemblies. snk friend_assemblies. snk**

**sn-PC friend_assemblies. snk Key. PublicKey**

**sn -tp key.publickey**

L'esempio di codice successivo accede a un tipo privato nel componente con nome sicuro.

```cpp
// friend_assemblies_6.cpp
// compile by using: /clr /link /keyfile:friend_assemblies.snk
#using "friend_assemblies_5.dll" as_friend

int main() {
   Class1 ^ a = gcnew Class1;
   a->Test_Public();
}
```

```Output
Class1::Test_Public
```

## <a name="see-also"></a>Vedere anche

[Estensioni componenti per le piattaforme runtime](../extensions/component-extensions-for-runtime-platforms.md)
