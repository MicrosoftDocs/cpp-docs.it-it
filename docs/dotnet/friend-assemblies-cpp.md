---
title: Assembly Friend (C++)
ms.date: 11/04/2016
helpviewer_keywords:
- friend assemblies, Visual C++
ms.assetid: 8d55fee0-b7c2-4fbe-a23b-dfe424dc71cd
ms.openlocfilehash: e469556a773ffcdbf50e53d94022c0b6b7abf869
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62404429"
---
# <a name="friend-assemblies-c"></a>Assembly Friend (C++)

Per i runtime applicabili, il *assembly friend* funzionalità del linguaggio rende i tipi che sono nell'ambito dello spazio dei nomi o globale in un componente di assembly accessibile a uno o più assembly client o netmodule.

## <a name="all-runtimes"></a>Tutti i runtime

**Note**

(Questa funzionalità del linguaggio non supportata in tutti i Runtime).

## <a name="windows-runtime"></a>Windows Runtime

**Note**

(Questa funzionalità del linguaggio non supportata in Windows Runtime).

### <a name="requirements"></a>Requisiti

Opzione del compilatore: **/ZW**

## <a name="common-language-runtime"></a>Common Language Runtime

**Note**

#### <a name="to-make-types-at-namespace-scope-or-global-scope-in-an-assembly-component-accessible-to-a-client-assembly-or-netmodule"></a>Per rendere accessibili a un assembly client o un file con estensione netmodule tipi nell'ambito dello spazio dei nomi o globale in un componente di assembly

1. Nel componente, specificare un attributo assembly <xref:System.Runtime.CompilerServices.InternalsVisibleToAttribute>e passare il nome dell'assembly client o del file con estensione netmodule che avrà accesso a tipi nell'ambito dello spazio dei nomi o globali nel componente.  È possibile specificare più assembly client o netmodule specificando gli attributi aggiuntivi.

1. Nell'assembly client o nel file con estensione netmodule, quando si fa riferimento l'assembly del componente utilizzando `#using`, passare il `as_friend` attributo.  Se si specifica la `as_friend` degli attributi per un assembly che non specifica `InternalsVisibleToAttribute`, verrà generata un'eccezione di runtime se si prova ad accedere a un tipo nell'ambito dello spazio dei nomi o globali nel componente.

Si verificherà un errore di compilazione se l'assembly che contiene il <xref:System.Runtime.CompilerServices.InternalsVisibleToAttribute> attributo non ha un nome sicuro, ma l'assembly client che utilizza il `as_friend` l'attributo non.

Anche se i tipi nell'ambito dello spazio dei nomi e ambito globale possono essere note a un assembly client o un file con estensione netmodule, accessibilità del membro è ancora attiva.  Ad esempio, è possibile accedere un membro privato.

Accesso a tutti i tipi in un assembly deve essere concessa esplicitamente.  Ad esempio, l'assembly C non ha accesso a tutti i tipi nell'assembly A se assembly C fa riferimento all'assembly B e l'assembly B ha accesso a tutti i tipi nell'assembly A.

Per informazioni su come firmare, vale a dire, come assegnare un nome sicuro a, ovvero un assembly che viene compilato con il compilatore Visual C++, vedere [assembly con nome sicuro (firma degli Assembly) (C + c++ /CLI CLI)](../dotnet/strong-name-assemblies-assembly-signing-cpp-cli.md).

Come alternativa all'uso della funzionalità di assembly friend, è possibile usare <xref:System.Security.Permissions.StrongNameIdentityPermission> limitare l'accesso ai singoli tipi.

### <a name="requirements"></a>Requisiti

Opzione del compilatore: **/clr**

### <a name="examples"></a>Esempi

L'esempio di codice seguente definisce un componente che specifica un assembly client che ha accesso ai tipi nel componente.

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

Esempio di codice successivo accede a un tipo privato nel componente.

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

Esempio di codice successivo definisce un componente, ma non specifica un assembly client che sarà possibile accedere ai tipi nel componente.

Si noti che il componente viene collegato mediante **/OPT: noref**. In questo modo si garantisce che i tipi privati vengono emessi nei metadati del componente, che non sono obbligatorio quando il `InternalsVisibleTo` attributo è presente. Per altre informazioni, vedere [/OPT (ottimizzazioni)](../build/reference/opt-optimizations.md).

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

L'esempio di codice seguente definisce un client che tenta di accedere a un tipo privato in un componente che non consente l'accesso ai relativi tipi privati. A causa del comportamento di runtime, se si desidera rilevare l'eccezione, è necessario tenta di accedere a un tipo privato in una funzione di supporto.

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

Esempio di codice successivo viene illustrato come creare un componente con nome sicuro che specifica un assembly client che sarà possibile accedere ai tipi nel componente.

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

**sn -d friend_assemblies.snk**

**sn -k friend_assemblies.snk**

**sn -i friend_assemblies.snk friend_assemblies.snk**

**sn -pc friend_assemblies.snk key.publickey**

**sn -tp key.publickey**

Esempio di codice successivo accede a un tipo privato nel componente con nome sicuro.

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
