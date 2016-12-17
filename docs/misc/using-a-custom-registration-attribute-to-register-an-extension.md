---
title: "Uso di un attributo di registrazione personalizzato per registrare un&#39;estensione | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
ms.assetid: 98068fa7-bda1-4922-b3f6-28680de58c3d
caps.latest.revision: 3
caps.handback.revision: 3
manager: "douge"
---
# Uso di un attributo di registrazione personalizzato per registrare un&#39;estensione
In alcuni casi può essere necessario creare un attributo della nuova registrazione per l'estensione.  È possibile utilizzare gli attributi di registrazione per aggiungere nuove chiavi del Registro di sistema o aggiungere nuovi valori alle chiavi esistenti.  The new attribute must derive from <xref:Microsoft.VisualStudio.Shell.RegistrationAttribute>, and it must override the <xref:Microsoft.VisualStudio.Shell.RegistrationAttribute.Register%2A> and <xref:Microsoft.VisualStudio.Shell.RegistrationAttribute.Unregister%2A> methods.  
  
## creare un attributo personalizzato  
 Nel codice seguente viene illustrato come creare un attributo della nuova registrazione.  
  
```  
[AttributeUsage(AttributeTargets.Class, Inherited = true, AllowMultiple = false)]  
    public class CustomRegistrationAttribute : RegistrationAttribute  
    {  
    }  
  
```  
  
 <xref:System.AttributeUsageAttribute> viene utilizzata sulle classi di attributi per specificare l'elemento del programma \(classe, metodo, e così via.\) il cui attributo a, se può essere utilizzato più volte e se può essere ereditato.  
  
### Creare una chiave del Registro di sistema  
 Nel codice seguente, l'attributo personalizzato crea una sottochiave personalizzata nella chiave per il package VS che durante la registrazione.  
  
```  
public override void Register(RegistrationAttribute.RegistrationContext context)  
{  
    Key packageKey = null;  
    try  
    {   
        packageKey = context.CreateKey(@"Packages\{" + context.ComponentType.GUID + @"}\Custom");  
        packageKey.SetValue("NewCustom", 1);  
    }  
    finally  
    {  
        if (packageKey != null)  
            packageKey.Close();  
    }  
}  
  
public override void Unregister(RegistrationContext context)  
{  
    context.RemoveKey(@"Packages\" + context.ComponentType.GUID + @"}\Custom");  
}  
  
```  
  
### Creare un nuovo valore in una chiave del Registro di sistema esistente  
 È possibile aggiungere valori personalizzati a una chiave esistente.  Nel codice seguente viene illustrato come aggiungere un nuovo valore al codice di registrazione di un VSPackage.  
  
```  
public override void Register(RegistrationAttribute.RegistrationContext context)  
{  
    Key packageKey = null;  
    try  
    {   
        packageKey = context.CreateKey(@"Packages\{" + context.ComponentType.GUID + "}");  
        packageKey.SetValue("NewCustom", 1);  
    }  
    finally  
    {  
        if (packageKey != null)  
            packageKey.Close();  
                }  
}  
  
public override void Unregister(RegistrationContext context)  
{  
    context.RemoveValue(@"Packages\" + context.ComponentType.GUID, "NewCustom");  
}  
  
```