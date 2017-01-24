---
title: "Procedura: leggere i dati dal Registro di sistema di Windows (C++/CLI) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
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
  - "Registro di sistema, lettura"
  - "Visual C++, lettura dal Registro di sistema di Windows"
ms.assetid: aebf52c0-acc7-40e2-adbc-d34e0a1e467e
caps.latest.revision: 11
caps.handback.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Procedura: leggere i dati dal Registro di sistema di Windows (C++/CLI)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Nell'esempio di codice riportato di seguito viene utilizzata la chiave <xref:Microsoft.Win32.Registry.CurrentUser> per leggere i dati dal Registro di sistema di Windows.  Innanzitutto vengono enumerate le sottochiavi utilizzando il metodo <xref:Microsoft.Win32.RegistryKey.GetSubKeyNames%2A>, quindi viene aperta la sottochiave Identities utilizzando il metodo <xref:Microsoft.Win32.RegistryKey.OpenSubKey%2A>.  Come per le chiavi di primo livello, ciascuna sottochiave è rappresentata dalla classe <xref:Microsoft.Win32.RegistryKey>.  Infine, viene utilizzato il nuovo oggetto <xref:Microsoft.Win32.RegistryKey> per enumerare le coppie chiave\/valore.  
  
## Esempio  
  
### Codice  
  
```  
// registry_read.cpp  
// compile with: /clr  
using namespace System;  
using namespace Microsoft::Win32;  
  
int main( )  
{  
   array<String^>^ key = Registry::CurrentUser->GetSubKeyNames( );  
  
   Console::WriteLine("Subkeys within CurrentUser root key:");  
   for (int i=0; i<key->Length; i++)  
   {  
      Console::WriteLine("   {0}", key[i]);  
   }  
  
   Console::WriteLine("Opening subkey 'Identities'...");  
   RegistryKey^ rk = nullptr;  
   rk = Registry::CurrentUser->OpenSubKey("Identities");  
   if (rk==nullptr)  
   {  
      Console::WriteLine("Registry key not found - aborting");  
      return -1;  
   }  
  
   Console::WriteLine("Key/value pairs within 'Identities' key:");  
   array<String^>^ name = rk->GetValueNames( );  
   for (int i=0; i<name->Length; i++)  
   {  
      String^ value = rk->GetValue(name[i])->ToString();  
      Console::WriteLine("   {0} = {1}", name[i], value);  
   }  
  
   return 0;  
}  
```  
  
## Osservazioni  
 La classe <xref:Microsoft.Win32.Registry> è semplicemente un contenitore per le istanze statiche di <xref:Microsoft.Win32.RegistryKey>.  Ciascuna istanza rappresenta un nodo radice del Registro di sistema.  Le istanze sono <xref:Microsoft.Win32.Registry.ClassesRoot>, <xref:Microsoft.Win32.Registry.CurrentConfig>, <xref:Microsoft.Win32.Registry.CurrentUser>, <xref:Microsoft.Win32.Registry.LocalMachine> e <xref:Microsoft.Win32.Registry.Users>.  
  
 Oltre a essere statici, gli oggetti all'interno della classe <xref:Microsoft.Win32.Registry> sono di sola lettura,  come anche le istanze della classe <xref:Microsoft.Win32.RegistryKey> create per accedere al contenuto degli oggetti del Registro di sistema.  Per informazioni su come evitare questo comportamento, vedere [Procedura: inserire dati nel Registro di sistema di Windows](../dotnet/how-to-write-data-to-the-windows-registry-cpp-cli.md).  
  
 Esistono altri due oggetti nella classe <xref:Microsoft.Win32.Registry>: <xref:Microsoft.Win32.Registry.DynData> e <xref:Microsoft.Win32.Registry.PerformanceData>.  Entrambi sono istanze della classe <xref:Microsoft.Win32.RegistryKey>.  L'oggetto <xref:Microsoft.Win32.Registry.DynData> contiene informazioni dinamiche del Registro di sistema che sono supportate solo in Windows 98 e Windows Me.  L'oggetto <xref:Microsoft.Win32.Registry.PerformanceData> può essere utilizzato per accedere alle informazioni del contatore di prestazioni per le applicazioni che utilizzano il sistema di monitoraggio delle prestazioni di Windows.  Il nodo <xref:Microsoft.Win32.Registry.PerformanceData> rappresenta le informazioni che non sono effettivamente archiviate nel Registro di sistema e che quindi non possono essere visualizzate mediante Regedit.exe.  
  
## Vedere anche  
 [Procedura: inserire dati nel Registro di sistema di Windows](../dotnet/how-to-write-data-to-the-windows-registry-cpp-cli.md)   
 [Operazioni Windows](../dotnet/windows-operations-cpp-cli.md)   
 [Programmazione .NET con C\+\+\/CLI](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)