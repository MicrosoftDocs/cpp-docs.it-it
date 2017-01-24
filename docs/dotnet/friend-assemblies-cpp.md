---
title: "Assembly Friend (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "12/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "assembly di tipo friend, Visual C++"
ms.assetid: 8d55fee0-b7c2-4fbe-a23b-dfe424dc71cd
caps.latest.revision: 27
caps.handback.revision: 27
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Assembly Friend (C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Per il runtime applicabili, la funzionalità del linguaggio *degli assembly Friend* rende i tipi che si trovano all'ambito o all'ambito dello spazio dei nomi globale in una parte dell'assembly accessibile a uno o più assembly o .netmodules client.  
  
## Tutti i runtime  
 **Osservazioni**  
  
 \(Questa funzionalità del linguaggio non è supportata in tutti i runtime.\)  
  
## [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)]  
 **Osservazioni**  
  
 \(Questa funzionalità del linguaggio non è supportata in [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)]\).  
  
### Requisiti  
 Opzione del compilatore: **\/ZW**  
  
## [!INCLUDE[clr_for_headings](../dotnet/includes/clr_for_headings_md.md)]  
 **Osservazioni**  
  
#### Per fare in modo che i tipi in ambito o all'ambito dello spazio dei nomi globale in una parte dell'assembly accessibile a un assembly o a un client .netmodule  
  
1.  Nel componente, specificare un attributo <xref:System.Runtime.CompilerServices.InternalsVisibleToAttribute>dell'assembly e passare il nome dell'assembly o di .netmodule client che tipi di accesso all'ambito o in ambito globale di spazio dei nomi nel componente.  È possibile specificare gli assembly più client o .netmodules specificando gli attributi aggiuntivi.  
  
2.  Nell'assembly o in .netmodule client, quando si fa riferimento l'assembly componente utilizzando `#using`, passare l'attributo di `as_friend`.  Se si specifica l'attributo di `as_friend` per un assembly non specifica `InternalsVisibleToAttribute`, verrà generata un'eccezione in fase di esecuzione se si tenta di accedere a un tipo all'ambito o in ambito globale di spazio dei nomi nel componente.  
  
 Un errore di compilazione verrà generato se l'assembly che contiene l'attributo di <xref:System.Runtime.CompilerServices.InternalsVisibleToAttribute> non ha un nome sicuro ma l'assembly client che utilizza l'attributo di `as_friend`.  
  
 Sebbene i tipi in ambito e in ambito globale di spazio dei nomi siano noti a un assembly o a un client, .netmodule l'accessibilità del membro è ancora attivo.  Ad esempio, non è possibile accedere a un membro privato.  
  
 L'accesso a tutti i tipi in un assembly deve essere esplicitamente concesse.  Ad esempio, l'assembly che C non può accedere a tutti i tipi dell'assembly A se l'assembly C fa riferimento l'assembly B e l'assembly B può accedere a tutti i tipi dell'assembly A.  
  
 Per informazioni su come specificare l'accessibilità dei tipi da un assembly, vedere [Visibilità di tipi](../misc/type-visibility.md).  
  
 Per informazioni sulla procedura di accesso, ovvero come assegnare un nome sicuro \- molti\-a\-uno a assembly compilato utilizzando il compilatore di Visual C\+\+, vedere [Assembly con nome sicuro \(firma degli assembly\)](../dotnet/strong-name-assemblies-assembly-signing-cpp-cli.md).  
  
 Come alternativa a utilizzare gli assembly Friend la funzionalità, è possibile utilizzare <xref:System.Security.Permissions.StrongNameIdentityPermission> per limitare l'accesso ai singoli tipi.  
  
### Requisiti  
 Opzione del compilatore: **\/clr**  
  
### Esempi  
 Il codice riportato di seguito viene definito un componente che specifica un assembly client che ha accesso ai tipi del componente.  
  
```  
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
  
 L'esempio di codice seguente accede a un tipi privati nel componente.  
  
```  
// friend_assemblies_2.cpp  
// compile by using: /clr  
#using "friend_assemblies.dll" as_friend  
  
int main() {  
   Class1 ^ a = gcnew Class1;  
   a->Test_Public();  
}  
```  
  
 **Output**  
  
 `Class1::Test_Public`  
  
 L'esempio di codice seguente definisce un componente ma non viene specificato un assembly client che abbia accesso ai tipi del componente.  
  
 Si noti che il componente è collegata utilizzando **\/opt:noref**.  Ciò garantisce che tutti i tipi privati vengono emessi nei metadati di un componente, che non è necessaria quando l'attributo di `InternalsVisibleTo` è presente.  Per ulteriori informazioni, vedere [\/OPT \(Ottimizzazioni\)](../build/reference/opt-optimizations.md).  
  
```  
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
  
 Nell'esempio di codice viene definito un client che tenta di accedere a un proprietario digitare un componente che non è possibile accedere ai tipi privati.  A causa del comportamento del runtime, se si desidera rilevare l'eccezione, tentare di accedere a un privato tipo in una funzione di supporto.  
  
```  
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
  
 **Output**  
  
 `caught an exception`  
  
 Illustrato nel codice di esempio come creare un componente con nome sicuro che specifica un assembly client che avranno accesso ai tipi del componente.  
  
```  
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
  
 Si noti che il componente deve specificare la chiave pubblica.  Si consiglia di eseguire i comandi seguenti in sequenza a un prompt dei comandi creare una coppia di chiavi e ottenere la chiave pubblica:  
  
 **sn \-d friend\_assemblies.snk**  
  
 **sn \-k friend\_assemblies.snk**  
  
 **sn \-i friend\_assemblies.snk friend\_assemblies.snk**  
  
 **sn \-pc friend\_assemblies.snk key.publickey**  
  
 **sn \-tp key.publickey**  
  
 L'esempio di codice seguente accede a un tipi privati nel componente con nome sicuro.  
  
```  
// friend_assemblies_6.cpp  
// compile by using: /clr /link /keyfile:friend_assemblies.snk  
#using "friend_assemblies_5.dll" as_friend  
  
int main() {  
   Class1 ^ a = gcnew Class1;  
   a->Test_Public();  
}  
```  
  
 **Output**  
  
 `Class1::Test_Public`  
  
## Vedere anche  
 [Component Extensions for Runtime Platforms](../windows/component-extensions-for-runtime-platforms.md)