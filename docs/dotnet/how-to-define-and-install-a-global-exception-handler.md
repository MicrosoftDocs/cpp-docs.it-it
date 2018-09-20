---
title: 'Procedura: definire e installare un gestore eccezioni globale | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- handlers, global
ms.assetid: dd88a812-3bc7-4ce8-8283-4b674c246534
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: ff91a742b1a6641fbc689968587f0472c333e16a
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46423364"
---
# <a name="how-to-define-and-install-a-global-exception-handler"></a>Procedura: definire e installare un gestore eccezioni globale

L'esempio di codice seguente illustra le eccezioni non gestite come possono essere acquisite. Il form di esempio contiene un pulsante che, quando premuti, esegue un riferimento null, causando un'eccezione generata. Questa funzionalità rappresenta un errore di codice tipico. L'eccezione viene intercettata dal gestore di eccezioni a livello di applicazione installato per la funzione principale.

Questa operazione viene eseguita associando un delegato per il <xref:System.Windows.Forms.Application.ThreadException> evento. In questo caso, eccezioni successive vengono quindi inviate per la `App::OnUnhandled` (metodo).

## <a name="example"></a>Esempio

```
// global_exception_handler.cpp
// compile with: /clr
#using <system.dll>
#using <system.drawing.dll>
#using <system.windows.forms.dll>

using namespace System;
using namespace System::Threading;
using namespace System::Drawing;
using namespace System::Windows::Forms;

ref class MyForm : public Form
{
   Button^ b;
public:
   MyForm( )
   {
      b = gcnew Button( );
      b->Text = "Do Null Access";
      b->Size = Drawing::Size(150, 30);
      b->Click += gcnew EventHandler(this, &MyForm::OnClick);
      Controls->Add(b);
   }
   void OnClick(Object^ sender, EventArgs^ args)
   {
      // do something illegal, like call through a null pointer...
      Object^ o = nullptr;
      o->ToString( );
   }
};

ref class App
{
public:
   static void OnUnhandled(Object^ sender, ThreadExceptionEventArgs^ e)
   {
      MessageBox::Show(e->Exception->Message, "Global Exeception");
      Application::ExitThread( );
   }
};

int main()
{
   Application::ThreadException += gcnew
      ThreadExceptionEventHandler(App::OnUnhandled);

   MyForm^ form = gcnew MyForm( );
   Application::Run(form);
}
```

## <a name="see-also"></a>Vedere anche

[Gestione delle eccezioni](../windows/exception-handling-cpp-component-extensions.md)